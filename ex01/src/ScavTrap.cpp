/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:50:47 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 17:04:40 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap( name ) {
	std::cout << "ScavTrap constructor with name called" << std::endl;
	name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& source ) {
	std::cout << "Copy assignment operator called" << std::endl;
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << name << " called" << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	if (hitPoints <= 0) {
		std::cout << "ScavTrap " << name << " has no hit points left!" << std::endl;
	}
	else if (energyPoints <= 0) {
		std::cout << "ScavTrap " << name << " has no enery points left!" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}