#include <iostream>
#include <fstream>

int main (int argc, char *argv[]) 
{
	// verify arguments
	if (argc != 4) 
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	// name files
	std::string filename = argv[1];
	filename += ".replace";
	// open files
	std::ifstream ifread(argv[1]);
	std::ofstream ofwrite(filename.c_str());
	if (!ifread.is_open() || !ofwrite.is_open()) {
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	// read lines
	std::string buff;
	std::size_t pos;
	std::string to_find = argv[1];
	std::size_t len = to_find.length();
	while (getline(ifread, buff)) 
	{
		// find string
		int i = 0;
		while ((pos = buff.find(argv[2], i)) != std::string::npos)
		{
			ofwrite << buff.substr(i, pos - i) << argv[3];
			i = pos + len;
		}
		ofwrite << &buff[i] << std::endl;
	}

	// close files
	ifread.close();
	ofwrite.close();

	return 0;
}