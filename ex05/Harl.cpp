#include "Harl.hpp"

Harl::Harl()
{
	this->tab_complain[0].funcToCall = "DEBUG";
	this->tab_complain[0].funcPtr = &Harl::debug;
	this->tab_complain[1].funcToCall = "INFO";
	this->tab_complain[1].funcPtr = &Harl::info;
	this->tab_complain[2].funcToCall = "WARNING";
	this->tab_complain[2].funcPtr = &Harl::warning;
	this->tab_complain[3].funcToCall = "ERROR";
	this->tab_complain[3].funcPtr = &Harl::error;

}

Harl::~Harl()
{

}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup";
	std::cout << " burger. I really do!" << std::endl;

}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;

}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;

}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->tab_complain[i].funcToCall == level)
			return (this->*tab_complain[i].funcPtr)(); 
	}
	std::cout << "[ NO EXIST ]" << std::endl;
	std::cout << level << " does not exist " << std::endl;
}