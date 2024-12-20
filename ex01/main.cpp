/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:20:54 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/20 08:24:40 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	a("Red");

	a.attack("Blue");
	std::cout << "Red hp: " << a.getHitPoint() << "\n"        	//ClapTrap public methods are accessible
	<< "Red energy: " << a.getEnergy() << "\n"					//through ScavTrap due to inheritance
	<< "Red dmg: " << a.getDmg() << std::endl; 
	return (0);
}