/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:16:41 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:19:27 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound: OUAFFF" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Dog: copy assignment operator" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Dog: copy constructor" << std::endl;
}

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog: default constructor" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor" << std::endl;
}