#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _hit_points(10), _energy_points(10), _attack_damage(0), _name(name)
{
	std::cout << "Other ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap():_hit_points(10), _energy_points(10), _attack_damage(0), _name("CL4P_TR4AP")
{
	std::cout << "Default ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &clap)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this!= &clap)
	{
		_hit_points = clap._hit_points;
		_energy_points = clap._energy_points;
		_attack_damage = clap._attack_damage;
		_name = clap._name;
	}
	return (*this);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << this->_name << " has now " << this->_energy_points << " energy point " << std::endl;
		std::cout << this->_name << " has now " << this->_hit_points << " hit point " << std::endl;
	}
	else
		std::cout << this->_name << "cannot be repaired." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int attack_damage)
{
	if (this->_hit_points > 0)
	{
		if (this->_hit_points > attack_damage)
			this->_hit_points -= attack_damage;
		else
			this->_hit_points = 0;
		std::cout << this->_name << " has now " << this->_hit_points << " hit point " << std::endl;
	}
	else
		std::cout << this->_name << " has " << this->_hit_points << " hit points " << std::endl;
	
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_attack_damage > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<" ,causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " cannot attack." << std::endl;
}
