#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_name = name;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want to high five you in five guys" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_attack_damage > 0 && this->_energy_points > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target <<" ,causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_attack_damage = 0;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " cannot attack." << std::endl;
}
