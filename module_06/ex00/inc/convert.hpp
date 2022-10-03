#ifndef __INT_HPP__
#define __INT_HPP__

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

class Convert {

	public: 
		Convert();
		Convert( char* );
		Convert( Convert& );
		Convert& operator=( Convert& );
		~Convert();

		void setChar(char* arg);
		void setInt();
		void setFloat();
		void setDouble();

		void getType(char *, std::string);

		int 	checkPsLiterals(std::string);
		void	returnPseudo(char, std::string);


	private:
		double			_value;
		int				_precision;
};



#endif