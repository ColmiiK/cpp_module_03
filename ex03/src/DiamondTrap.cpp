/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:32:46 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:53:49 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap( void ) {
	name = "Default DiamondTrap";
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "Constructing DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap( std::string str ) {
	std::cout << "FIRST ATTACKDAMAGE-> " << attackDamage << std::endl;
	name = str;
	ClapTrap::name = str + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << "Constructing DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &source ) {
	*this = source;
	std::cout << "Default copy constructor of DiamondTrap called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap &source ) {
	this->name = source.name;
	ClapTrap::name = source.name + "_clap_name";
	this->hitPoints = source.hitPoints;
	this->energyPoints = source.energyPoints;
	this->attackDamage = source.attackDamage;
	std::cout << "Copy overload operator of DiamondTrap called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Destructing DiamondTrap " << name << std::endl;
}

void DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "I am a Diamond Trap named " << this->name << " and my Clap Trap name is "  << ClapTrap::name << std::endl;
}
