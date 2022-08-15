#ifndef WEAPON
#define WEAPON

#include <iostream>
#include <unistr.h>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string	type);
	~Weapon();
	const std::string&	getType();
	void	setType(std::string type);
};


#endif