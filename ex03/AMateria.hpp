/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:31:46 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 19:55:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	_type;
	public:
		//Default constructor
		AMateria(void);
		//Copy constructor
		AMateria(const AMateria &other);
		//String constructor
		AMateria(std::string const &type);
		//Desturcotr
		~AMateria(void);
		AMateria &operator=(const AMateria &other);
		std::string const &getType(void) const;
		virtual AMateria* clone() const = 0;
		virtual void use (ICharacter& target);		
};