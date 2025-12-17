/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:42:53 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 19:37:09 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::printBrain(void) const
{
	std::cout << this->_catIdeas << std::endl;
}

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
		if (this->_catIdeas)
			delete _catIdeas;
		this->_catIdeas = new Brain(*other._catIdeas);
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
	this->_catIdeas = new Brain();
	std::cout << "Cat default constructor" << std::endl;
}

// Destructeur
Cat::~Cat(void)
{
	delete this->_catIdeas;
	std::cout << "Cat destructor" << std::endl;
}