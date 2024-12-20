/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:11:45 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/19 10:09:17 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& to_copy);
	ScavTrap&	operator=(const ScavTrap& to_copy);
	void		attack(const std::string& target);
	void		guardGate();
};

#endif