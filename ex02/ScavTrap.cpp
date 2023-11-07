# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = "SC4V_TR4P";
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav): ClapTrap(scav)
{
	*this = scav;
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScaveTrap other constructor" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = name;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scav)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this!= &scav)
	{
		_hit_points = scav._hit_points;
		_energy_points = scav._energy_points;
		_attack_damage = scav._attack_damage;
		_name = scav._name;
	}
	return (*this);
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
	if (this->_energy_points > 0 && this->_attack_damage > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<" ,causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " cannot attack." << std::endl;
}
