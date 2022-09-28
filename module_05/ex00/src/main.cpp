#include "../inc/Bureaucrat.hpp"

#include <iostream>
#include <exception>

static void gradevalid() {
	std::cout << "---------------" << std::endl;
	std::cout << "| Valid Grade |" << std::endl;
	std::cout << "---------------" << std::endl;
	try {
		Bureaucrat almound("Almound", 5);
		std::cout << almound << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void gradetoohigh() {
	std::cout << "------------------" << std::endl;
	std::cout << "| Grade too High |" << std::endl;
	std::cout << "------------------" << std::endl;
	try {
		Bureaucrat almound("Almound", -1);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void gradetoolow() {
	std::cout << "-----------------" << std::endl;
	std::cout << "| Grade too Low |" << std::endl;
	std::cout << "-----------------" << std::endl;
	try {
		Bureaucrat almound("Almound", 200);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void 	gradeincrement() {
	std::cout << "-------------------" << std::endl;
	std::cout << "| Grade Increment |" << std::endl;
	std::cout << "-------------------" << std::endl;
	try {
		Bureaucrat cloud("Cloud", 5);
		std::cout << cloud << std::endl;
		while (1) {
			cloud.increment();
			std::cout << cloud << std::endl; 
		}
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void gradedecrement() {
	std::cout << "-------------------" << std::endl;
	std::cout << "| Grade Decrement |" << std::endl;
	std::cout << "-------------------" << std::endl;
	try {
		Bureaucrat cloud("Cloud", 145);
		std::cout << cloud << std::endl;
		while (1) {
			cloud.decrement();
			std::cout << cloud << std::endl;
		}
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main (void) {
	gradevalid();
	gradetoohigh();
	gradetoolow();
	gradeincrement();
	gradedecrement();

	return 0;
}