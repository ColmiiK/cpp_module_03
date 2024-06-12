/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:51:02 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:41:11 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
	private:
		bool gateKeeperMode;
	public:
		ScavTrap( void );
		ScavTrap( std::string str );
		ScavTrap( const ScavTrap& source );
		ScavTrap& operator=( const ScavTrap& source);
		~ScavTrap( void );

		void guardGate( void );
};


#endif 