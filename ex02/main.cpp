/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:20:54 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/20 08:28:47 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	FragTrap	a("Red");
	ScavTrap	b("Blue");

	a.attack("Blue");
	std::cout << "Red hp: " << a.getHitPoint() << "\n"        	//ClapTrap public methods are accessible
	<< "Red energy: " << a.getEnergy() << "\n"					//through FragTrap due to inheritance
	<< "Red dmg: " << a.getDmg() << std::endl;
	return (0);
}