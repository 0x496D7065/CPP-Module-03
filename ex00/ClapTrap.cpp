/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:20:46 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/19 10:10:35 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->setName("default");
	this->setHitPoint(10);
	this->setEnergy(10);
	this->setDmg(0);
	std::cout << "Default constructor called" << std:: endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->setName(name);
	this->setHitPoint(10);
	this->setEnergy(10);
	this->setDmg(0);
	std::cout << "Constructor called and created " << this->getName() << std:: endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called on " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy)
{
	this->setName(to_copy._name);
	this->setHitPoint(to_copy._hitPoint);
	this->setEnergy(to_copy._energy);
	this->setDmg(to_copy._dmg);
	std::cout << "Copy constructor called and copied " << to_copy._name << std:: endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& to_copy)
{
	if (this != &to_copy)
    {
        this->_name = to_copy._name;
        this->_hitPoint = to_copy._hitPoint;
        this->_energy = to_copy._energy;
        this->_dmg= to_copy._dmg;
    }
    return *this;
}

std::string ClapTrap::getName(void)
{
	return (this->_name);
}

int ClapTrap::getHitPoint(void)
{
	return (this->_hitPoint);
}

int ClapTrap::getEnergy(void)
{
	return (this->_energy);
}

int ClapTrap::getDmg(void)
{
	return (this->_dmg);
}

void ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoint(const int value)
{
	this->_hitPoint = value;
}

void ClapTrap::setEnergy(const int value)
{
	this->_energy = value;
}

void ClapTrap::setDmg(const int value)
{
	this->_dmg = value;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->getHitPoint() > 0 && this->getEnergy() > 0)
	{
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target
		<< ", causing " << this->getDmg() << " points of damage!" << std::endl;
	}
	else
		std::cout << this->getName() << " does not have enough energy/hitpoint to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->getName() << " suffers " << amount
	<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoint() > 0 && this->getEnergy() > 0)
	{
		this->_energy -=1;
		this->_hitPoint += amount;
		std::cout << "ClapTrap " << this->getName() << " repairs itself for "
		<< amount << " hitpoints!" << std::endl;
	}
	else
		std::cout << this->getName() << " does not have enough energy/hitpoint to repair itself" << std::endl;
}
