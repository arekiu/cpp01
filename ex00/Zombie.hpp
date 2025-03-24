#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class	Zombie
{
	private:
			std::string	_name;
	public:
			Zombie();
			~Zombie();
			void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
