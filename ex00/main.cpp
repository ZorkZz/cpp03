#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap;

	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.beRepaired(10);
	return (0);
}