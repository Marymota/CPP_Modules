#include <iostream>
#include <cstdlib>
#include <exception>
#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"


/*	By far, the most common use for dynamic casting is to convert base-class pointers
		into derived-class pointers. */
void identify( Base* p ) {
	
	if (A* a = dynamic_cast<A*>(p)) {
		std::cout << "Pointer to Type A" << std::endl;
		a->A::presentation();
	}
	else if (B* b = dynamic_cast<B*>(p)) {
		std::cout << "Pointer to Type B" << std::endl;
		b->B::presentation();
	}
	else if (C* c = dynamic_cast<C*>(p)) {
		std::cout << "Pointer to Type C" << std::endl;
		c->C::presentation();
	}
};
/*	If a dynamic_cast fails, the result of the conversion will be a null pointer.
		In order to make a safe program, we need to ensure the result of the dynamic_cast
		actually succedes. */

void identify( Base& p ) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "Reference to Type A" << std::endl;
		a.A::presentation();
	} 
	catch (std::exception& e) {}

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "Reference to Type B" << std::endl;
		b.B::presentation();
	}
	catch (std::exception& e) {}

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "Reference to Type C" << std::endl;
		c.C::presentation();
	}
	catch (std::exception& e) {}
};
/*	Because C++ does not have a "null reference", dynamic_cast can't return a null
		reference upon failure. Instead, if the dynamic_cast of a reference fails, an exception
		of type std::bad_cast is thrown. */

Base* generate() {
	
	srand(time(0)); // Initialize random number generator

	Base *p;
	int magic;
	magic = (rand() % 3) + 1;
	
	if (magic == 1) {
		p = new A();
	}
	else if (magic == 2) {
		p = new B();
	}
	else {
		p = new C();		
	}
	return p;
}

int main () {
	Base *base;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
}

//	Resources: 
//		Randomization: softwaretesttinghelp.com/random-number-generator-cpp/
//		Dynamic_cast: learncpp.com/cpp-tutorial/dynamic-casting/