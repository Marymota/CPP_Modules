	#include "../inc/convert.hpp"
	
	Convert::Convert() {}

	Convert::Convert( char* arg) {
		std::string str = static_cast<std::string>(arg);
		if (checkPsLiterals(str))
			return ;
		getType(arg, str);
		setChar(arg);
		setInt(arg);
		setFloat(arg);
		setDouble(arg);
	}

	Convert::Convert( Convert& arg) {
		*this = arg;
	}

	Convert& Convert::operator=( Convert& arg) {
		*this = arg;
		return *this;
	}

	Convert::~Convert(){};

	void Convert::returnPseudo(char sign, std::string ps) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << sign << ps << "f" << std::endl;
		std::cout << "double: " << sign << ps << std::endl;
	}

	int Convert::checkPsLiterals(std::string str) {
		if ((str.compare("-inff") == 0) || (str.compare("-inf") == 0)) {
			returnPseudo('-', "inf");
		}
		else if ((str.compare("+inff") == 0) || (str.compare("+inf") == 0))
			returnPseudo('+', "inf");
		else if ((str.compare("nanf") == 0) || (str.compare("nan") == 0))
			returnPseudo(0, "nan");
		else
			return (0);
		return (1);
	}

	void Convert::getType(char* arg, std::string str) {
		// check if arg is a printable character
		if (str.length() == 1 && 
			((arg[0] >= 33 && arg[0] <= 47) || (arg[0] >= 58 && arg[0] <= 126))) {
				_value = arg[0];
		}
		else
		{
			char* end;
			_value = strtod(arg, &end);
		}
		std::cout << _value << std::endl;
	}

	void Convert::setChar(char* arg) {
		std::string str = static_cast<std::string>(arg);
		if (_value >= '0' && _value <= '9')
			std::cout << "char: \'" << arg[0] << "\'" << std::endl;
		else if (_value <= 32 || _value > 126 )
				std::cout << "char: " << "Non displayable" << std::endl;
		else if (str.length() == 1) {
			std::cout << "char: \'" << arg[0] << "\'" << std::endl;
		}
		else {
			char _char = static_cast<char>(_value);
			std::cout << "char: \'" << _char << "\'" << std::endl;
		}
	}

	void Convert::setInt(char* arg) {
		(void) arg;
		int _int = static_cast<int>(_value);
		if (_int == -2147483648)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << _int << std::endl;
	}

	void Convert::setFloat(char* arg) {
		std::string str = static_cast<std::string>(arg);
		for (int i = 0; arg[i] != '\0'; i++) {
			std::cout << "float: " << _value << "f" << std::endl;
			break;
		}
	}

	void Convert::setDouble(char* arg) {
		for (int i = 0; arg[i] != '\0'; i++) {
			if (arg[i - 1] == 0)
				std::cout << "double: " << _value << std::endl;
			break;
		}
	}