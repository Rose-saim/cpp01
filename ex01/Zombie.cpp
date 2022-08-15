#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Destroy zombie " << std::endl;
}

void	Zombie::setname(std::string name, int i)
{
	std::string str = "(" + std::to_string(i) + ")";
	this->name = name + str;
}

std::string	Zombie::announce()
{
	return (this->name);
}

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Horde;
	
	Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Horde[i].setname(name, i);
		std::cout << Horde[i].announce() << std::endl;
	}
	return (Horde);
}
