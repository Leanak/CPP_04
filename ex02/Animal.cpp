/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:13:57 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:07:48 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal make sound" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Animal: copy assignment operator" << std::endl;
	return (*this);
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal: copy constructor" << std::endl;
}

Animal::Animal(void): _type("Animal")
{
	std::cout << "Animal: constructor" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor" << std::endl;
}

