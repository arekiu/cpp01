#ifndef HUMANB_HPP

# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
			std::string	_name;
			Weapon *_weapon; //here it cant be a reference cause in that case it should be directly initializated
	public:
			HumanB(const std::string &name);
			~HumanB();
			void	attack() const;
			void	setWeapon(Weapon &weapon);

};

#endif
