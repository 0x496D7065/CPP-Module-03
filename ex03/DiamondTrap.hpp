/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:11:45 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/19 10:09:17 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string.h>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap					//DiamondTrap inherit from Scav and Frag
{																		//Both wich inherits !virtually! from ClapTrap
private:																//Virtual inheritance makes it so derived class shares a single instance of the base class
	std::string	_name;													//Without it, multiple instance of each ClapTrap public member would be created and 
public:																	//the compiler wouldn't know which one to use
	DiamondTrap();
	DiamondTrap(const std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& to_copy);
	DiamondTrap&	operator=(const DiamondTrap& to_copy);
	void	whoAmI();
};

#endif