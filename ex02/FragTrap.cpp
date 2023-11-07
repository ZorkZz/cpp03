#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_name = "FR4AG_TR4P";
}

FragTrap::FragTrap(const FragTrap &frag): ClapTrap(frag)
{
	*this = frag;
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "other FragTrap constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_name = name;
}

FragTrap &FragTrap::operator = (const FragTrap &frag)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this!= &frag)
	{
		_hit_points = frag._hit_points;
		_energy_points = frag._energy_points;
		_attack_damage = frag._attack_damage;
		_name = frag._name;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want to high five you" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_attack_damage > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target <<" ,causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " cannot attack." << std::endl;
}
