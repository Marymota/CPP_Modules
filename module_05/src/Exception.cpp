#include "../inc/Exception.hpp"

Exception::Exception(const std::string& msg) : _msg(msg) {};
	
std::string	Exception::getMessage() const {
	return (_msg);
};

Exception::~Exception(){};