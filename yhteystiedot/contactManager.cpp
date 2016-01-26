#include "contactManager.h"
#include <iostream>
#include "Contact.h"
contactManager::contactManager()
{
}


contactManager::~contactManager()
{
}

void contactManager::addContact()
{
	std::string name;
	std::cout << "Anna nimi:	" ;
	std::cin >> name;

	int number;
	std::cout << "Anna numero:	" ;
	std::cin >> number;

	std::string adress;
	std::cout << "Anna osoite:	" ;
	std::cin >> adress;

	Contact *contact = new Contact(name, number, adress);
	contacts.push_back(contact);
}

void contactManager::tulostaTiedot()
{
	std::vector<Contact*>::iterator it;

	for (it = contacts.begin(); it != contacts.end(); ++it) 
	{
		(*it)->tulosta();
	}
}

std::map<std::string, Contact*> contactManager::makemap()
{
	std::map<std::string, Contact*> map;
	std::vector<Contact*>::iterator it;
	for (it = contacts.begin(); it != contacts.end(); ++it) {
		map.insert(std::make_pair((*it)->getName(), *it));
	}
	return map;
}