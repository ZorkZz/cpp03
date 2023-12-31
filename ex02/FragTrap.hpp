#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstring>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &frag);
		FragTrap(std::string name);
		FragTrap &operator = (const FragTrap &frag);
		~FragTrap();
		void	highFivesGuys(void);
		void	attack(const std::string &target);
};

#endif