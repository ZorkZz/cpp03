#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstring>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		std::string	_name;
};

#endif