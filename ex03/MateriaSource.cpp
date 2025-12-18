/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:00:09 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 12:48:53 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materiaTemplates[i] && this->materiaTemplates[i]->getType() == type)
			return (this->materiaTemplates[i]->clone());
	}
	return (0);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	if (!m)
	{
		std::cout << "Materia not valid..so sorry guysssss" << std::endl;
		return ;
	}
	i = 0;
	for (; i < 4 && this->materiaTemplates[i]; i++)
	{
	}
	if (i == 4)
	{
		std::cout << "Impossible to learn a new materia" << std::endl;
		return ;
	}
	this->materiaTemplates[i] = m->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		// this->_type = other._type;
	}
	std::cout << "MateriaSource: Copy assignment operator " << std::endl;
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
	std::cout << "MateriaSource: Copy constructor" << std::endl;
}

MateriaSource::MateriaSource(void)
{
	// this->_type = "MateriaSource";
	std::cout << "MateriaSource: constructor " << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materiaTemplates[i])
			delete this->materiaTemplates[i];
	}
	delete[] materiaTemplates;
	std::cout << "MateriaSource: destructor " << std::endl;
}
