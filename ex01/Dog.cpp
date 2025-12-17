/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:48:44 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 18:14:25 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Print brain
void	Dog::printBrain(void) const
{
	std::cout << this->_dogIdeas << std::endl;
}

//Make Sound
void	Dog::makeSound(void) const
{
	std::cout << "Dog sound: OUAFFFF" << std::endl;
}

//Copy assignment operator
Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_dogIdeas = new Brain(*other._dogIdeas);
	}
	std::cout << "Dog copy assignment operator" << std::endl;
	return (*this);
}

//Copy constructor
Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Dog copy constructor" << std::endl;
}

//Default constructor
Dog::Dog(void)
{
	this->_type = "Dog";
	this->_dogIdeas = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

//Destructor
Dog::~Dog(void)
{
	delete this->_dogIdeas;
	std::cout << "Dog destructor" << std::endl;
}