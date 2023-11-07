#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap;
	ScavTrap	scav;
	FragTrap	frag;

	clap.takeDamage(10);
	clap.beRepaired(50);
	clap.attack("TARGET");

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	scav.takeDamage(10);
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;
	
	frag.takeDamage(20);
	frag.beRepaired(20);
	frag.attack("TARGET");
	frag.highFivesGuys();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;
	FragTrap	other_frag(frag);
	std::cout << std::endl << "---------------------------" << std::endl << std::endl;
	
	other_frag.takeDamage(20);
	other_frag.beRepaired(20);
	other_frag.attack("TARGET");
	other_frag.highFivesGuys();

	std::cout << std::endl << "---------------------------" << std::endl << std::endl;

	return (0);
}