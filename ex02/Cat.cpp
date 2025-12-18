/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:22:26 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:50:05 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound: MEOWWWW" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Cat: copy assignment operator" << std::endl;
	return (*this);
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat: copy constructor" << std::endl;
}

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "Cat: default constructor" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_catBrain;
	std::cout << "Cat: destructor" << std::endl;
}