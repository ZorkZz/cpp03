# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScaveTrap constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScaveTrap destructor" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in guard mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_attack_damage > 0 && this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_attack_damage = 0;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " cannot attack." << std::endl;
}
