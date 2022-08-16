#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	setname(std::string name, int i);
	std::string	announce();
};


Zombie*	zombieHorde( int N, std::string name );

#endif