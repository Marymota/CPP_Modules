#ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stack>
#include <list>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {

  public:
		//typename necessary?
		typedef typename std::stack<int>::container_type::iterator iterator;

    MutantStack();
    MutantStack(unsigned int);
    MutantStack(const MutantStack&);
    MutantStack& operator=(const MutantStack& );
    ~MutantStack();

		iterator begin();
		iterator end();
};

template<typename T>
MutantStack<T>::MutantStack(){	};

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& obj) { 
	*this = obj; 
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& obj) { 
	std::stack<int>::operator=( obj );
	return *this; 
}

template<typename T>	MutantStack<T>::~MutantStack(){};

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return ( this->c.begin() );
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return ( this->c.end() );
}

#endif