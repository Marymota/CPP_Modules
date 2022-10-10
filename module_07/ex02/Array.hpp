#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <cstdlib>

template <typename T>
class Array {

	private:
		unsigned int _len;
		T* _array;

	public:
		Array<T>();
		Array<T>(unsigned int);
		Array<T>(const Array<T>&);
		Array<T>& operator=(const Array<T>&);
		T& operator[](int);
		~Array<T>();

		T getArray(int);

		int size();
}; 

template <typename T>
Array<T>::Array(){
	std::cout << "Default empty constructor" << std::endl;
	_array = new T[ 0 ];
	_len = 0;
}

template <typename T>
Array<T>::Array(unsigned int len)
{
	//	std::cout << "Default lengthy constructor" << std::endl;
	if ((int)len < 0)
		throw std::exception();
	else {
		_len = len;
		_array = new T[_len];
	}
}

template <typename T>
Array<T>::Array(const Array& copy) {
	_len = 0;
//	std::cout << "Copy constructor" << std::endl;
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
//	std::cout << "Assignment operator" << std::endl;
	if ( _len > 0 )
		delete[] _array;
	_len = copy._len;
	_array = new T[_len];
	int len = static_cast<int>(_len);
	for(int i = 0; i < len; i++) {
		_array[i] = copy._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](int i) {
	int len = static_cast<int>(_len);
	if (i >= len || i < 0) {
	//	std::cout << i << std::endl;
		throw std::exception();
	}
	else 
		return _array[i];
}

template <typename T>
Array<T>::~Array() {
//	std::cout << "Destroyer Constructor" << std::endl;
	delete[] _array;
}

template <typename T>
int Array<T>::size() {
	return _len;
}


#endif

// Sometimes, class variables need to be defined in the copy constructor.
// If not, they can be filled with random values that gives undefined behaviour!
// In those cases, we can have segfaults that just ocurr sometimes 