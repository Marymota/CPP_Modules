#include "../inc/span.hpp"

	Span::Span() : _max(0){
		std::vector<int> _vector (0,0);
		_it = _vector.begin();
	};

	Span::Span(unsigned int N) : _max(N){
		_vector = std::vector<int> (N,0);
		_it = _vector.begin();
	};

	Span::Span(const Span& obj) : _max(0){
		*this = obj;
	};

	Span& Span::operator=(const Span& obj){
		_max = obj._max;
		for (int i = 0; i < (int)_max; i++) {
			_vector[i] = obj._vector[i];
		}
		return *this;
	};

	int Span::size() {
			return _vector.size();
	};

	Span::~Span(){ };

	void Span::addNumber(int n) { 
		if (_it != _vector.end())
			std::fill_n(_it++, 1 , n);
		else
			throw NoSpace();
	};

	void Span::addNumber(int len, long value) {
		if ((int)_vector.size() > len)
			throw UndefinedValues();
		std::cout << "values: ";
		int magic;
		srand(time(0));
		if (len <= (long)_vector.size()) {
			for(int i = 0; i < len; i++) {
				magic = rand() % value;
				std::fill_n(_it++, 1 , magic);
				std::cout << magic << " ";
			}
		}
		else
			throw NoSpace();
		std::cout << std::endl;
	}

	int Span::shortestSpan(){
		if (_vector.size() <= 1)
			throw NoSpan();
		std::vector<int>::iterator tmp;
		std::vector<int>::iterator iter = --_vector.end();
		std::vector<int>::iterator premax = --_vector.end() - 1;
		std::sort(_vector.begin(), _vector.end());
		tmp = _vector.begin();
		int value;
		while (iter != tmp) {
			if (value > ((int)*iter - (int)*premax)){
				if (((int)*iter - (int)*premax) > 0)
					value = ((int)*iter - (int)*premax);
			}
			premax--;
			iter--;
		}
		return value;
	}

	int Span::longestSpan(){
		if (_vector.size() <= 1)
			throw NoSpan();
		std::vector<int>::iterator max;
		std::vector<int>::iterator min;
		max = std::max_element(_vector.begin(), _vector.end());
		min = std::min_element(_vector.begin(), _vector.end());
		return ((int)*max - (int)*min);
	};

	int Span::getElement(int i) {
			return _vector[i];
	}

	const char* Span::NoSpace::what() const throw() {
		return "Not enough space!";
	}

	const char* Span::NoSpan::what() const throw() {
		return "No Span possible!";
	}

	const char* Span::UndefinedValues::what() const throw() {
		return "Vector not filled...";
	}

