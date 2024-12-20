/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:26:16 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/20 08:26:28 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default Frag constructor called" << std:: endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Frag constructor called and created " << getName() << std:: endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called on " << getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap &to_copy) : ClapTrap(to_copy)
{
	std::cout << "Frag copy constructor called and copied " << to_copy._name << std:: endl;
}

FragTrap& FragTrap::operator=(const FragTrap& to_copy)										//operator overload is not inherited
{																							//here I'm making sure Frag= is using Clap=
	ClapTrap::operator=(to_copy);															//If not, compiler would create it anyway
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << " wants to make a high five!" << std::endl;
}
