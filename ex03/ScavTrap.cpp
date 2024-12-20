/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:26:16 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/20 08:30:37 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Scav constructor called" << std:: endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Scav constructor called and created " << getName() << std:: endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor called on " << getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &to_copy) : ClapTrap(to_copy)
{
	std::cout << "Scav copy constructor called and copied " << to_copy._name << std:: endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& to_copy)										//operator overload is not inherited
{																							//here I'm making sure Scav= is using Clap=
	ClapTrap::operator=(to_copy);															//If not, compiler would create it anyway
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (getHitPoint() > 0 && getEnergy() > 0)
	{
		this->_energy -= 1;
		std::cout << "ScavTrap " << getName() << " attacks " << target
		<< ", causing " << getDmg() << " points of damage!" << std::endl;
	}
	else
		std::cout << getName() << " does not have enough energy/hitpoint to attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
