#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen {

	private:
		void debug( void ); 	
		void info( void );
		void warning( void );
		void error( void );

	public:
		void complain( std::string level );

		typedef void (Karen::*MSG)();
		/* MSG is the type name, and a pointer of that type points to any member of Karen
		that takes (void), such as Karen debug, info, warning & error */
				
};

#endif