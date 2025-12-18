/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:25:00 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 12:32:29 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name)
{
	this->_name = name;
	std::cout << "Character: constructor " << _name << std::endl;
}

Character::Character(void)
{
	std::cout << "Character: default constructor" << std::endl;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	delete[] inventory;
	std::cout << "Character: destructor" << std::endl;
}
		
Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
	std::cout << "Character: destructor" << std::endl;

}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Materia not valid..so sorry guysssss" << std::endl;
		return ;
	}
	int i = 0;
	for ( ; i < 4 && this->inventory[i]; i++)
	{
	}
	if (i == 4)
	{
		std::cout << "INVENTORY FULL !! CAN'T TAKE THIS MATERIA...:(" << std::endl;
		return ;
	}
	inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid slot of inventory" << std::endl;
		return ;
	}
	if (this->inventory[idx])
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid slot of inventory" << std::endl;
		return ;
	}
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
}