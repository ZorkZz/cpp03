#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ClapTrap	trap(clap);
	ClapTrap	claptrap("trap");

	clap.takeDamage(10);
	clap.beRepaired(50);
	clap.attack("TARGET");

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	trap.takeDamage(10);
	trap.beRepaired(50);
	trap.attack("TARGET");

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	claptrap.takeDamage(10);
	claptrap.beRepaired(50);
	claptrap.attack("TARGET");

	std::cout << std::endl;

	return (0);
}