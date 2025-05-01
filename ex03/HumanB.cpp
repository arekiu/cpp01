# include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	: _name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
