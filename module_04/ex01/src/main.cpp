#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main () {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	std::cout << "---------------- Animal array constructor ---------------" << std::endl;

	Animal* array[10];

	// alternate creating Cats and Dogs

	for(int n = 0; n < 4; n++) {
		if ( n %2 == 0) {
			array[n] = new Dog();
		}
		else
			array[n] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "---------------- Animal array destructor -----------------" << std::endl;

	// Delete all created Animals
	for(int n = 0; n < 4; n++) {
		std::cout << std::endl;
		delete array[n];	
	}

	std::cout << std::endl;

	std::cout << "---------------- Deep copy -----------------" << std::endl;
	std::cout << "-> Basic" << std::endl;
	Dog basic;
	std::cout << basic.getType() << std::endl;
	basic.makeSound();
	basic.setIdeas("0", 0);
	basic.setIdeas("1", 1);
	basic.setIdeas("2", 2);
	std::cout << std::endl;
	std::cout << "-> Copy" << std::endl;
	Dog copy = basic;
	std::cout << copy.getType() << std::endl;
	copy.makeSound();
	std::cout << std::endl;
	std::cout << "-> Tmp" << std::endl;
	Dog tmp;
	tmp = basic;
	std::cout << tmp.getType() << std::endl;
	tmp.makeSound();
	std::cout << std::endl;
	std::cout << "--------------basic ideas" << std::endl;
	std::cout << std::endl;
	basic.getIdeas();
	std::cout << std::endl;
	basic.setIdeas("a", 0);
	basic.setIdeas("b", 1);
	basic.setIdeas("c", 2);
	std::cout << "--------------basic sets new ideas" << std::endl;
	std::cout << "--------------basic ideas" << std::endl;
	std::cout << std::endl;
	basic.getIdeas();
	std::cout << std::endl;
	std::cout << "--------------copy ideas" << std::endl;
	std::cout << std::endl;
	copy.getIdeas();
	std::cout << std::endl;
	std::cout << "--------------tmp ideas" << std::endl;
	std::cout << std::endl;
	tmp.getIdeas();
	std::cout << std::endl;


	return (0);
}

/*
	Resources:
	docs.microsoft.com/en-us/archive/msdn-magazine/2005/september/c-at-work-copy-constructors-assignment-operators-and-more
	cplusplus.com/articles/y8hv0pDG/
*/