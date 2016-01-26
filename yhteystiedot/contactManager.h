#pragma once
#include <vector>
#include "Contact.h"
#include <map>
class contactManager
{
public:
	contactManager();

	~contactManager();

	void addContact();

	void tulostaTiedot();

	std::map<std::string, Contact*> makemap();

private:
	std::vector<Contact*> contacts;

};

