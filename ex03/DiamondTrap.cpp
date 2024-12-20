/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:26:16 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/19 10:14:48 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	ClapTrap::_name = "Default_clap_name";
	this->_name = "Default";
	std::cout << "Default Diamond constructor called" << std:: endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    this->_name = name;
    std::cout << "DiamondTrap constructor called and created " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called on " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &to_copy) : ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy)
{
	std::cout << "Diamond copy constructor called and copied " << to_copy._name << std:: endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& to_copy)										//operator overload is not inherited
{																							//here I'm making sure Diamond= is using Scav=
	ScavTrap::operator=(to_copy);															//If not, compiler would create it anyway
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << this->_name
	<< " but my Clap name is: " << ClapTrap::_name << std::endl;
}