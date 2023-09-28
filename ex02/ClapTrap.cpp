#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name)
{
	std::cout << "ClapTrap constructor" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << this->_name << " has now " << this->_energy_points << " energy point " << std::endl;
	}
	else
		std::cout << this->_name << "cannot be repaired." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int attack_damage)
{
	this->_attack_damage += attack_damage;
	std::cout << this->_name << " has now " << this->_attack_damage << " attack dommage " << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_attack_damage > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<",causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_attack_damage = 0;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " cannot attack." << std::endl;
}
