/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:45:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 20:36:45 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use (ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure	*Cure::clone(void) const
{
	return (new Cure());
}

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Cure: Copy assignment operator " << std::endl;
	return (*this);
}

Cure::Cure(const Cure &other)
{
	*this = other;
	std::cout << "Cure: Copy constructor" << std::endl;
}

Cure::Cure(void)
{
	this->_type = "Cure";
	std::cout << "Cure: constructor " << std::endl;	
}

Cure::~Cure(void)
{
	std::cout << "Cure: destructor " << std::endl;
}