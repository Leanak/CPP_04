/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:46:03 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 20:00:15 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class	Cure: public AMateria
{
	protected:
	public:
		//Default constructor
		Cure(void);
		//Copy constructor
		Cure(const Cure &other);
		//Destructor
		virtual ~Cure(void);
		Cure &operator=(const Cure &other);
		std::string const &getType(void) const;
		Cure* clone() const;
		void use (ICharacter& target);
		//void use (ICharacter& target);
};