/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 19:56:06 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 11:51:37 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const &AMateria::getType(void) const
{
	return (_type);
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "AMateria constructor with param" << std::endl;
}


AMateria	&AMateria::operator=(const AMateria &other)
{
	(void)other;
	std::cout << "AMateria: Copy assignment operator " << std::endl;
	return (*this);
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	std::cout << "AMateria: Copy constructor" << std::endl;
}

AMateria::AMateria(void)
{
	this->_type = "AMateria";
	std::cout << "AMateria: constructor " << std::endl;	
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: destructor " << std::endl;
}