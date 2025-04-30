#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string new_name)
{
	_name = new_name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed." << std::endl;
	return ;
}

void	Zombie::setName(std::string new_name)
{
	this->_name = new_name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


