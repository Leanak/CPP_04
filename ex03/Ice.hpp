/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:39:32 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 20:03:59 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class	Ice: public AMateria
{
	protected:
	public:
		//Default constructor
		Ice(void);
		//Copy constructor
		Ice(const Ice &other);
		//Desturcotr
		~Ice(void);
		Ice &operator=(const Ice &other);
		std::string const &getType(void) const;
		Ice* clone() const;
		void use (ICharacter& target);
		//void use (ICharacter& target);
		
};