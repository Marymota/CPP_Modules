#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char *argv[])
{
	char c;
	int j;
	int i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = 0;
			while(argv[i][j])
			{
				c = toupper(argv[i][j++]);
				std::cout << c;
			}
		}
		std::cout << "\n";
	}
	return 0;
}