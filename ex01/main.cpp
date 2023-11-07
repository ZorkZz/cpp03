#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ScavTrap	scav;
	ScavTrap	other_scav;

	clap.takeDamage(10);
	clap.beRepaired(50);
	clap.attack("TARGET");

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	scav.takeDamage(10);
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;
	other_scav = scav;
	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	other_scav.takeDamage(10);
	other_scav.takeDamage(10);
	other_scav.beRepaired(10);
	other_scav.guardGate();

	return (0);
}