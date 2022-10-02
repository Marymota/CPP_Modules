#ifndef __INT_HPP__
#define __INT_HPP__

#include <iostream>

class Convert {

	public: 
		Convert();
		Convert( char* );
		Convert( Convert& );
		Convert& operator=( Convert& );
		~Convert();

		void setChar(char* arg);
		void setInt(char* arg);
		void setFloat(char* arg);
		void setDouble(char* arg);
		std::string getChar() const;
		int getInt() const;
		int getFloat() const;
		int getDouble() const;
		int getErr(int) const;

		//class Impossible : public std::exception {
		//	public:
		//		const char* what() const throw ();
		//};
		
	private:
		std::string _char;
		int					_int;
		float				_float;
		double			_double;
		int _err[4];
};

std::ostream& operator<<(std::ostream&, const Convert&); //Overload (<<) operator


#endif