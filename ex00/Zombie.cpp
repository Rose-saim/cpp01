#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "Create zombie " << name << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destroy zombie " << this->name << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiinnnnzzzzZ..." << std::endl;
}

void	Zombie::SetZombie(std::string name)
{
	this->name = name;
}
