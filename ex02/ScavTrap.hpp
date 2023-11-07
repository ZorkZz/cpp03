#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstring>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string name);
		ScavTrap &operator = (const ScavTrap &scav);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
};

#endif