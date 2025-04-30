#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1 = newZombie("Michael Jackson");

	randomChump("Foo");

	zombie1->announce();

	delete zombie1;
}
