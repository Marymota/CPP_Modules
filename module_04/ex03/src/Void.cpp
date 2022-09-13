#include "../inc/Void.hpp"

Void::Void() {};

Void::Void(const Void& obj) {
	*this = obj;
};

Void& Void::operator=(const Void& obj) {
	*this = obj;
	return (*this);
};

Void::~Void() {};

