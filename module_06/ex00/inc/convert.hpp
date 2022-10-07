#ifndef __INT_HPP__
#define __INT_HPP__

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <climits>

class Convert {

	public: 
		Convert();
		Convert( char* );
		Convert( Convert& );
		Convert& operator=( Convert& );
		~Convert();

		void setChar(char* arg);
		void setInt(std::string str);
		void setFloat(std::string str);
		void setDouble(std::string str);

		void getType(char *, std::string);

		int 	checkPsLiterals(std::string);
		void	returnPseudo(char, std::string);


	private:
		double		_value;
};



#endif