#pragma once
#include <string>
class Contact
{
public:
	Contact(std::string name, int number, std::string adress);

	~Contact();

	void tulosta();
	
	std::string getName();

private:

	std::string name;
	int number;
	std::string adress;

	
};

