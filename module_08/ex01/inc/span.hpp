#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>

class Span {
    public:
        Span();
        Span(unsigned int);
        Span(const Span&);
        Span& operator=(const Span& );
        ~Span();

        void addNumber(int);
        int shortestSpan();
        int longestSpan();

        int getElement(int);
        int size();
        
        class NoSpace : public std::exception {
	        public:
		        const char* what() const throw();
};

    private:
        unsigned int _max;
        std::vector<int> _vector;
        std::vector<int>::iterator _it;
};



#endif