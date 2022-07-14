#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string buff, std::string str, std::string new_str)
{
	size_t start = 0;
	size_t found = 0;
	std::string newbuff;

	while ((found = buff.find(str, start)) != std::string::npos)
	{
		newbuff += buff.substr(start, found - start);
		newbuff += new_str;
		start = found + str.length();
	}

	return (newbuff);
}

int read_file(std::string filename, std::string str, std::string new_str)
{
	std::ifstream input;
	std::ofstream output;
	std::string buff;
	size_t pos;
	
	input.open(filename.c_str(), std::ios::in);
	output.open((filename + ".replace").c_str());
	while (getline(input, buff))
	{
		pos = buff.find(str);

		if (pos != std::string::npos)
			std::cout << replace(buff, str, new_str) << std::endl;
		else
			std::cout << buff << std::endl;
	}
	input.close();
	output.close();
	return (0);
}

int main (int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error\n Invalid number of arguments" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string str = argv[2];
	std::string new_str = argv[3];

	if (str.empty() || new_str.empty())
	{
		std::cerr << "Error\n Invalid arguments" << std::endl;
		return (1);
	}

	read_file(filename, str, new_str);
	return (0);
}