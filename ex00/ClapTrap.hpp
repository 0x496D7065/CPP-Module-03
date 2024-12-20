/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:20:50 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/19 08:37:09 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoint;
	int			_energy;
	int			_dmg;
public:
	ClapTrap();
	ClapTrap(const std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &to_copy);
	ClapTrap&	operator=(const ClapTrap& to_copy);
	std::string	getName( void );
	int			getHitPoint( void );
	int			getEnergy( void );
	int			getDmg( void );
	void		setName(std::string const name);
	void		setHitPoint(int const value);
	void		setEnergy(int const value);
	void		setDmg(int const value);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif