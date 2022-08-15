#include "Zombie.hpp"

int	main()
{
	Zombie	*Horde;

	Horde = zombieHorde(3, "Zombie");
	delete[] Horde;
	return (0);
}