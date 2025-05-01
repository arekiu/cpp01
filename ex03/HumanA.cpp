# include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " > attacks with their " << this->_weapon.getType() << std::endl;
}



//weapon and name must be directly initialized cause they are references
