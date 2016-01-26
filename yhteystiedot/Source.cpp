#include <iostream>
#include "contactManager.h"
#include "Contact.h"
#include <map>

int main()
{
	contactManager contactM;

	contactM.addContact();
	
	//contactM.tulostaTiedot();

	std::string name;
	std::cout << "Hae nimellä:	";
	std::cin >> name;

	std::map<std::string, Contact*> contactMap = contactM.makemap();

	std::map<std::string, Contact*>::iterator it=contactMap.find(name);

	return 0;
}