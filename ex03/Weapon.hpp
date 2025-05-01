#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>
#include <iomanip>

class	Weapon
{
	private:
			std::string	_type;
	public:
			Weapon();
			~Weapon();
			const std::string&	getType() const;
			void	setType(const std::string &type);

};

#endif

/*getType needs "const" after () so the method can be called in const objects*/

/*when i use void	setType(std::string type);
that created a copy of the string , that could use unnecesary memory

void	setType(const std::string& type);
I pass a reference so no copy is made, more efficient
const cause I just need to read it, no modify*/
