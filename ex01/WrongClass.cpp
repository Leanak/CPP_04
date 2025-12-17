/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:07:38 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 15:18:03 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongClass.hpp"

//WRONG CAT
void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound: BEURKKKK" << std::endl;	
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Wrong Cat copy assignment operator" << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "Wrong Cat copy constructor" << std::endl;
}

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "Wrong Cat default constructor" << std::endl;
} 

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong Cat destructor" << std::endl;
}


//WRONG ANIMAL
std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal make sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Wrong Animal copy assignment operator" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "Wrong Animal copy constructor" << std::endl;
}

WrongAnimal::WrongAnimal(void): _type("Wrong Animal")
{
	std::cout << "Wrong Animal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal desturcotr" << std::endl;
}