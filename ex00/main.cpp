/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:20:54 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/19 07:37:31 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	a("Red");

	a.attack("Blue");
	a.takeDamage(8);
	a.beRepaired(2);
	a.takeDamage(8);
	a.attack("Blue");
	a.beRepaired(2);
	return (0);
}