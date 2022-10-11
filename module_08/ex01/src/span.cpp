#include "../inc/span.hpp"

    Span::Span() : _max(0){
        std::cout << "Default constructor" << std::endl;
        std::vector<int> _vector (0,0);
        _it = _vector.begin();
    };

    Span::Span(unsigned int N) : _max(N){
        std::cout << "Lenghy constructor" << std::endl;
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

    void shortestSpan(){};

    int Span::longestSpan(){
        std::vector<int>::iterator max;
        std::vector<int>::iterator min;
        max = std::max_element(_vector.begin(), _vector.end());
        min = std::min_element(_vector.begin(), _vector.end());

        std::cout << "min span: " << (int)*min << std::endl;
        std::cout << "max span: " << (int)*max << std::endl;

        return ((int)*max - (int)*min);
    };

    int Span::getElement(int i) {
        return _vector[i];
    }

    const char* Span::NoSpace::what() const throw() {
    	return "Not enough space!";
    }

