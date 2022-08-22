#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}


void	HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon)
		std::cout << this->weapon->getType();
	std::cout << std::endl;

}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}