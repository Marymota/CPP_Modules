#ifndef __EXCEPTION_HPP_
#define __EXCEPTION_HPP_

#include <iostream>

class Exception {

	public:
		Exception(const std::string&);
		~Exception();

		std::string getMessage() const;

	private:
		std::string _msg;
};

#endif