#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <cstdlib>

template <typename T>
class Array {

	private:
		int _len;
		T* _array;

	public:
		Array<T>();
		Array<T>(int);
		Array<T>(const Array<T>&);
		Array<T>& operator=(const Array<T>&);
		T& operator[](int);
		~Array<T>();

		int size();
};

template <typename T>
Array<T>::Array(){
	std::cout << "Default empty constructor" << std::endl;
	_array = 0;
	_len = 0;
}

template <typename T>
Array<T>::Array(int len)
{
	std::cout << "Default lengthy constructor" << std::endl;
	_len = len;
	_array = new T[_len];
	std::cout << "len: " << _len << std::endl;
}

template <typename T>
Array<T>::Array(const Array& copy) {
	std::cout << "Copy constructor" << std::endl;
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
	std::cout << "Assignment operator" << std::endl;
	// if (_array != 0)
	// 	delete[] _array;
	_len = copy._len;
	_array = new T[_len];
	std::cout << "len: " << _len << std::endl;
	for(int i = 0; i < _len; i++) {
		_array[i] = copy._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](int i) {
	if (i >= _len || i < 0) {
		std::cout << i << std::endl;
		throw std::exception();
	}
	else 
		return _array[i];
}

template <typename T>
Array<T>::~Array() {
	std::cout << "Destroyer Constructor" << std::endl;
	delete[] _array;
}

template <typename T>
int Array<T>::size() {
	return _len;
}

#endif