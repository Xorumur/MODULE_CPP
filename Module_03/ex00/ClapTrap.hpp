#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
			std::string name;
			int			pdv;
			int			mana;
			int			dmg;
			bool		dead;
	public:
			ClapTrap(std::string name);
			~ClapTrap(void);
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			int	getPdv(void);
			int	getMana(void);
			int	getDmg(void);
			std::string	getName(void);
			void	setPdv(int New);
			void	setMana(int New);
			void	setDmg(int New);
			void	setName(std::string New);
};

#endif