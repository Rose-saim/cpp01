#include "Zombie.hpp"

Zombie* NewZombie( std::string name)
{
	Zombie *newZ;

	newZ = new Zombie(name);
	newZ->SetZombie(name);
	return (newZ);
}


int	main()
{
	Zombie	*ZombieN1 = NewZombie("N1");
	Zombie	*ZombieN2 = NewZombie("N2");
	Zombie	*ZombieN3 = NewZombie("N3");

	ZombieN1->announce();
	ZombieN2->announce();
	ZombieN3->announce();
	delete ZombieN1;
	delete ZombieN2;
	delete ZombieN3;
	return (0);
}