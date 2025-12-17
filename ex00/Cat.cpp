/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:42:53 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 14:24:36 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Make sound for cat
void Cat::makeSound(void) const
{
	std::cout << "Cat sound: MEOWWWWW" << std::endl;
}

// Copy assignment operator
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Cat copy assignment operator" << std::endl;
	return (*this);
}

// Copy constructor
Cat::Cat(const Cat &other)
{
	*this = other;
}

// Default constructor
Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

// Destructeur
Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
}