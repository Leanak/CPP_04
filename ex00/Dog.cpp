/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:48:44 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 14:24:47 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

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
	std::cout << "Dog default constructor" << std::endl;
}

//Destructor
Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
}