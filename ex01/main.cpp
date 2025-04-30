#include "Zombie.hpp"

int	main(void)
{
	int	nr_of_zombies = 5;

	Zombie	*horde = zombieHorde(nr_of_zombies, "Mr. Zombie");

	if (!horde)
		return (1);

	for (int i = 0; i < nr_of_zombies; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
}
