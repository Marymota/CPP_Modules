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
 
	// Abstract Animal class test -> error
	// const Animal* test = new Animal();
	// Animal test;
	

	return (0);
}

/*
	Resources:
	docs.microsoft.com/en-us/archive/msdn-magazine/2005/september/c-at-work-copy-constructors-assignment-operators-and-more
	cplusplus.com/articles/y8hv0pDG/
*/