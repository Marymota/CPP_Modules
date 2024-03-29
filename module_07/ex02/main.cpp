#include <iostream>
#include "Array.hpp"

 #define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
// 
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
// 
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
// 		std::cout << std::endl;
// 		try
//     {
//         numbers[700] = 0;
// 				std::cout << "numbers: " << numbers[700] << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

 int main (int, char**)
 {
	
	std::cout << std::endl;
	std::cout << "EMPTY"<< std::endl;
 	try {
		Array<int> empty(0);
 		std::cout << "empty size: " << empty.size() << std::endl;
		std::cout << "empty[0]: " << empty[0] << std::endl;
 	}
 	catch (std::exception &error) {
 		std::cout << error.what() << std::endl;
 	}

	// --------------------------------------------------------------------------

	std::cout << std::endl;
	std::cout << "NEGATIVE"<< std::endl;
	try {
		Array<int> empty(-10);
 		std::cout << "empty size: " << empty.size() << std::endl;
		std::cout << "empty[0]: " << empty[0] << std::endl;
 	}
 	catch (std::exception &error) {
 		std::cout << error.what() << std::endl;
 	}

	// --------------------------------------------------------------------------

	std::cout << std::endl;
	std::cout << "FULL INT"<< std::endl;
 	try {
		Array<int> full(20);
		full[0] = 10;
 		std::cout << "full size: " << full.size() << std::endl;
		std::cout << "full[0]: " << full[0] << std::endl;
 	}
 	catch (std::exception &error) {
 		std::cout << error.what() << std::endl;
 	}

	// --------------------------------------------------------------------------

	std::cout << std::endl;
	std::cout << "FULL LONG"<< std::endl;
 	try {
		Array<long> longArr(20);
 		std::cout << "size: " << longArr.size() << std::endl;
 	}
 	catch (std::exception &error) {
 		std::cout << error.what() << std::endl;
 	}

	// --------------------------------------------------------------------------

	std::cout << std::endl;
 	std::cout << "STRINGS"<< std::endl;

 	Array<std::string> pokemon(3);
 
 	pokemon[0] = "Bulbasaur";
 	pokemon[1] = "Squirtle";
 	pokemon[2] = "Charmander";
 
 	Array<std::string> pokeball(pokemon);
 	Array<std::string> pokemonster(3); // leek? WHY?
 	pokemonster = pokemon;
 
 	try {
 		std::cout << "Pokemon: " << pokemon[0] << std::endl;
 		std::cout << "Pokemon: " << pokeball[1] << std::endl;
 		std::cout << "Pokemon: " << pokemonster[2] << std::endl;
 	}
 	catch (std::exception &error) {
 		std::cout << error.what() << std::endl;
 	}
 }