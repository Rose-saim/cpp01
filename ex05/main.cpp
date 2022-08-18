#include "Harl.hpp"

int main()
{
	Harl	searchFunc;

	searchFunc.complain("DEBUG");
	std::cout << std::endl;
	searchFunc.complain("INFO");
	std::cout << std::endl;
	searchFunc.complain("WARNING");
	std::cout << std::endl;
	searchFunc.complain("ERROR");
	return (0);
}