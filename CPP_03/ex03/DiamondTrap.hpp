// ********************************************************************** //
//                                                                        //
//             DiamondTrap.hpp                                            //
//             Created: 2022/05/10 23:49:48 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP
# define WD "\033[1;0m"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//   A  		A	A
//  / \  		|	|
// B   C  vs 	B	C
//  \ /  		 \ /
//   D 			  D

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
		DiamondTrap();
	public:
		DiamondTrap( std::string name );
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();
		DiamondTrap & operator = (const DiamondTrap &src);
		void	attack(std::string const & target);
		void	whoAmI();
		void	getStats() const;
		using	ScavTrap::attack;
		using	ScavTrap::_energyPoints;
};

#endif //EX03_DIAMONDTRAP_HPP

