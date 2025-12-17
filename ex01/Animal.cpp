/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:51:11 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 18:13:25 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Fonctions membres
void	Animal::makeSound(void) const
{
	std::cout << "Animal make sound" << std::endl;
}

void	Animal::printBrain(void) const
{
	std::cout << "ANIMAL PRINT BRAIN" << std::endl;
}

//Getter
std::string	Animal::getType(void) const
{
	return (this->_type);
}

//Copy assignment operator
Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Animal copy assignment operator" << std::endl;
	return (*this);
}

//Copy constructor
Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor" << std::endl;
}

//Default constructor
Animal::Animal(void): _type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;	
}

//Destructor
Animal::~Animal(void)
{
	std::cout << "Animal destructor"  << std::endl;
}