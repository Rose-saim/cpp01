#include "Zombie.hpp"

Zombie* NewZombie(std::string name)
{
	Zombie *newZ;

	newZ = new Zombie(name);
	return (newZ);
}


void randumChup( std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}

int	main()
{
	Zombie	*ZombieN1 = NewZombie("N1");
	Zombie	*ZombieN2 = NewZombie("N2");
	Zombie	*ZombieN3 = NewZombie("N3");
	randumChup("N4");
	ZombieN1->announce();
	ZombieN2->announce();
	ZombieN3->announce();
	delete ZombieN1;
	delete ZombieN2;
	delete ZombieN3;
	return (0);
}
