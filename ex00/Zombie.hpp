#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <unistr.h>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	SetZombie(std::string name);
		void	announce();
		void	randomChump(std::string name);
};

Zombie* NewZombie( std::string name);

#endif