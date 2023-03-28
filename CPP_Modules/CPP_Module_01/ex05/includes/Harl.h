#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl{
	typedef struct s_levels{
		std::string level;
		void (Harl::*ptr)(void);
	}				t_levels;
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		void    complain( std::string level );
		t_levels levelArr[4];
};

#endif
