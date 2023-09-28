#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap("clapclap");
	ScavTrap	scav("scavscav");
	FragTrap	frag("fragfrag");


	std::cout << std::endl;

	clap.takeDamage(10);
	clap.attack("TARGET");
	clap.beRepaired(10);

	std::cout << std::endl;

	scav.takeDamage(10);
	scav.attack("TARGET");
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << std::endl;

	frag.takeDamage(10);
	frag.attack("TARGET");
	frag.beRepaired(10);
	frag.highFivesGuys();

	std::cout << std::endl;

	return (0);
}