#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}


Weapon::Weapon(const std::string &type)
	: _type(type)
{}

Weapon::~Weapon()
{
	return ;
}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}
