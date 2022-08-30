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

	for(int n = 0; n < 10; n++) {
		if ( n %2 == 0) {
			array[n] = new Dog();
		}
		else
			array[n] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "---------------- Animal array destructor -----------------" << std::endl;

	// Delete all created Animals
	for(int n = 0; n < 10; n++) {
		std::cout << std::endl;
		delete array[n];	
	}

	std::cout << "---------------- Dog Brain -----------------" << std::endl;

	Dog basic;
	{
	Dog tmp = basic;
	}

	std::cout << "---------------- Cat Brain -----------------" << std::endl;

	Cat b;
	{
	Cat t = b;
	}

	return (0);
}

/*
	A Brain class is created that contains an array of 100 strings called "ideas".
	Class 'Cat' and class 'Dog' get a pointer to a class 'Brain' object so that a
	new Brain() object can be created and referenced.
	Upon destruction, Dog and Cat will 'delete' their Brain.

*/