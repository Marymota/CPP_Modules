	#include "../inc/convert.hpp"
	
	Convert::Convert() {}

	Convert::Convert( char* arg) {
		std::string str = static_cast<std::string>(arg);
		if (checkPsLiterals(str))
			return ;
		getType(arg, str);
		setChar(arg);
		setInt();
		setFloat();
		setDouble();
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
		if (_value <= 33 || _value > 126 )
				std::cout << "char: " << "Non displayable" << std::endl;
		else if (str.length() == 1) {
			std::cout << "char: \'" << arg[0] << "\'" << std::endl;
		}
		else {
			char _char = static_cast<char>(_value);
			std::cout << "char: \'" << _char << "\'" << std::endl;
		}
	}

	void Convert::setInt() {
		int _int = static_cast<int>(_value);
		if (_int == INT_MIN || _int == INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << _int << std::endl;
	}

	void Convert::setFloat() {
		float _float = static_cast<float>(_value);
		std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	}

	void Convert::setDouble() {
		float _double = static_cast<double>(_value);
		std::cout << std::fixed << std::setprecision(1) << "double: " << _double << std::endl;
	}