#include "Contact.h"
#include <iostream>

Contact::Contact(std::string nimi, int numero,std::string osoite)
{
	name = nimi;
	number = numero;
	adress = osoite;

}


Contact::~Contact()
{
}



void Contact::tulosta()
{
	std::cout << "Nimi:	" << name << std::endl;
	std::cout << "Numero:	" << number << std::endl;
	std::cout << "Osoite:	" << adress << std::endl;
}

std::string Contact::getName() 
{
	return name;
}