#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main () {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();
	
	return (0);
}

/*
	Instance:

	In a computer system, any time a new context is created based on some model,
	it is said that the model has been instantiated.
	In practice, this instance usually has a data structure in common with other instances,
	but the values stored in the instances are separate.

----------------------------------------------------------------------------------------------
	Const classes:

	Instantiated class objects can be made constant by using the 'const' keyword.
	All const variables must be initialized at time of creation.
	In the case of const class objects, initialization is done via class constructors.
		->	const Animal* meta = new Animal();
	Once a const class object has been initialized via constructor, any attempt to modify
	the member variables of the object is disallowed. This includes both changing member
	variables directly (if they are public), or calling member functions that set the value
	of member variables.
----------------------------------------------------------------------------------------------
	'New' keyword:

	Objects created on the stack have a name and don't need a pointer to be accessed.
	The objects created with the 'new' keyword are allocated on the heap, don't have a name,
	and need a pointer so that it can be referenced and to access its member variables 
	and functions.

	When 'new' is used to allocate memory for a c++ class object, the object's constructor is
	called after the memory is allocated. 

	The 'delete' operator must be used to deallocate the memory allocated by the 'new' operator.
	The 'delete[]' operator is used to delete an array allocated by the 'new' operator.
		
----------------------------------------------------------------------------------------------
	Virtual functions and polymorphism

----------------------------------------------------------------------------------------------

		Resources:
			Wikipedia -> Instance (computer systems)
			learncpp.com -> 13.12-Const class objects and member functions
			iditect.com	 -> Define class and create object in C: use object pointer
*/