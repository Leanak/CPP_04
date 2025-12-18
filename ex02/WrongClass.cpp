/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:02:07 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:18:50 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongClass.hpp"

//Wrong Cat
void WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat sound: BEURKKK" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Wrong cat: copy assignment operator" << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "Wrong cat: copy constructor" << std::endl;
}
WrongCat::WrongCat(void)
{
	this->_type = "Wrong Cat";
	std::cout << "Wrong cat: default constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong cat: destructor" << std::endl;
}


//Wrong Animal
std::string WrongAnimal::getType(void) const
{
	return  (_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong animal make sound" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Wrong Animal: copy assignment operator" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const Animal &other)
{
	*this = other;
	std::cout << "Wrong Animal: copy constructor" << std::endl;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout <<	"Wrong Animal: default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal: destructor" << std::endl;
}
