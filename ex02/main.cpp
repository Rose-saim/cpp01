#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string str2 = "HI";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "==============" << std::endl;
	std::cout << "===ADDRESS====" << std::endl;
	std::cout << "==============" << std::endl;
	std::cout << "PTR:  : " << stringPTR << std::endl;
	std::cout << "REF: &: " << &stringREF << std::endl;
	std::cout << "==============" << std::endl;
	std::cout << "===POINTER====" << std::endl;
	std::cout << "==============" << std::endl;
	std::cout << "PTR: *: " << *stringPTR << std::endl;
	std::cout << "REF:  : " << stringREF << std::endl;
	return (0);
}