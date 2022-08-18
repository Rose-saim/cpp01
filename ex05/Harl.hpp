#ifndef HARL
#define HARL

#include <iostream>
#include <cstring>
#include <fstream>

class Harl;

typedef struct s_complain
{
	std::string	funcToCall;
	void	(Harl::*funcPtr)(void);
}				t_complain;

class Harl
{
	private:
		t_complain	tab_complain[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		void complain( std::string level );
		~Harl();
};


#endif