#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("clapclap");
	ScavTrap	scav("scavscav");

	clap.beRepaired(10);
	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.takeDamage(10);
	clap.attack("TARGET");

	scav.takeDamage(10);
	scav.attack("TARGET");
	scav.takeDamage(10);
	scav.attack("TARGET");
	scav.takeDamage(10);
	scav.attack("TARGET");
	scav.takeDamage(10);
	scav.attack("TARGET");
	scav.beRepaired(10);
	scav.guardGate();
	return (0);
}