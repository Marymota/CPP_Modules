	#include "../inc/convert.hpp"
	
	Convert::Convert() : _char("0"), _int(0), _float(0), _double(0) {}

	Convert::Convert( char* arg) : _char("0"), _int(0), _float(0), _double(0) {
		for(int i = 0; i < 4; i++)
			_err[i] = 0;
		setChar(arg);
		setInt(arg);
	}

	Convert::Convert( Convert& arg) {
		for(int i = 0; i < 4; i++)
			_err[i] = arg._err[i];
		this->_char = arg._char;
		this->_int = arg._int;
	}

	Convert& Convert::operator=( Convert& arg) {
		for(int i = 0; i < 4; i++)
			_err[i] = arg._err[i];
		this->_char = arg._char;
		this->_int = arg._int;
		return *this;
	}

	Convert::~Convert(){};

	void Convert::setChar(char* arg) {
		std::string str = static_cast<std::string>(arg);
		if ((arg[0] >= 33 && arg[0] <= 47) || (arg[0] >= 58 && arg[0] <= 126)) {
			if (str.length() == 1) {
				_char = str;
			} 
			else
				_err[0] = 1;
		}
		else
			_err[0] = 1;
	}

	std::string Convert::getChar() const{
		return _char;
	}
	
	void Convert::setInt(char* arg) {
		std::string str = static_cast<std::string>(arg);
		if ( arg[0] >= 47 && arg[0] <= 58 )
				_int = arg[0] - 48;
		else
			_err[1] = 1;
	}

	int Convert::getInt() const {
		return _int;
	}

	void Convert::setFloat(char* arg) {
		std::string str = static_cast<std::string>(arg);
		if ( arg[0] >= 47 && arg[0] <= 58 )
				_int = arg[0] - 48;
		else
			_err[2] = 1;
	}

	int Convert::getFloat() const {
		return _float;
	}

	void Convert::setDouble(char* arg) {
		std::string str = static_cast<std::string>(arg);
		if ( arg[0] >= 47 && arg[0] <= 58 )
				_int = arg[0] - 48;
		else
			_err[3] = 1;
	}

	int Convert::getDouble() const {
		return _double;
	}

	//const char* Convert::Impossible::what() const throw () {	
	//	return "Impossible";
	//}

	int Convert::getErr(int err) const {
			return _err[err];
	}

	std::ostream& operator<<(std::ostream& output, const Convert& obj) {
	if (obj.getErr(0) == 1)
		output << "char: " << "Non displayable" << std::endl;
	else
		output << "char: " << obj.getChar() << std::endl;
	if (obj.getErr(1) == 1)
		output << "int: " << "Impossible" << std::endl;
	else
		output << "int: " << obj.getInt() << std::endl;
	if (obj.getErr(2) == 1)
		output << "float: " << "Impossible" << std::endl;
	else
		output << "float: " << obj.getDouble() << std::endl;
	if (obj.getErr(3) == 1)
		output << "double: " << "Impossible" << std::endl;
	else
		output << "double: " << obj.getDouble() << std::endl;
	return output;
}