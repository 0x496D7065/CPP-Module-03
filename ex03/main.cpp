/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:20:54 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/20 09:04:51 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	a;

	a.attack("Blue");
	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();
	std::cout << "Red hp: " << a.getHitPoint() << "\n"
	<< "Red energy: " << a.getEnergy() << "\n"
	<< "Red dmg: " << a.getDmg() << std::endl; 
	return (0);
}