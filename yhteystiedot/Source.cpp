#include <iostream>
#include "contactManager.h"
#include "Contact.h"
#include <map>

int main()
{
	contactManager contactM;

	for (int i = 0; i < 3; i++)
	contactM.addContact();
	
	//contactM.tulostaTiedot();

	std::string name;
	std::cout << "Hae nimellä:	";
	std::cin >> name;

	std::map<std::string, Contact*> contactMap = contactM.makemap();

	std::map<std::string, Contact*>::iterator it=contactMap.find(name);

	if (it != contactMap.end()) 
	{
		Contact* contact = (*it).second;
		contact->tulosta();
	}

	else
	{
		std::cout << "Ei ole";
	}

	return 0;
}