#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat {

		std::string _name;
		int _grade;
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();

		Bureaucrat& operator<<(const Bureaucrat&);

		std::string getName();
		int getGrade();
		void increment();
		void decrement();
};

#endif