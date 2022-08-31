#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain {

	public:
		Brain();
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain();

		void getIdeas();
		void setIdeas(std::string idea, int n);

		// Create an array of ideas
		std::string ideas[100];
};

#endif