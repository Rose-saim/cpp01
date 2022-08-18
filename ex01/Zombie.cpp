#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Destroy zombie " << this->name << std::endl;
}

void	Zombie::setname(std::string name, int i)
{
	char c = i + '0';
	this->name = name + c;
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
