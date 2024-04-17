/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:50:47 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/15 16:24:01 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

static void print_constructor(std::string name) {
	std::cout << "Constructing ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap( void ) : ClapTrap () {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gate_keeper_mode = false;
	print_constructor(name);
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap ( str ) {
	name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gate_keeper_mode = false;
	print_constructor(name);
}

ScavTrap::ScavTrap( const ScavTrap& source ) : ClapTrap ( source ) {
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;	
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Deconstructing " << name << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	if (hitPoints <= 0) {
		std::cout << name << " has no hit points left!" << std::endl;
	}
	else if (energyPoints <= 0) {
		std::cout << name << " has no enery points left!" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate( void ) {
	gate_keeper_mode = !gate_keeper_mode;
	if (gate_keeper_mode)
		std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
	if (!gate_keeper_mode)
		std::cout << "ScavTrap " << name << " is no longer in Gate Keeper mode!" << std::endl;
}