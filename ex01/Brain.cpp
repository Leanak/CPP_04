/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:35:54 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:39:18 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain: copy assignment operator" << std::endl;
	return (*this);
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain: copy constructor" << std::endl;
}

Brain::Brain(void)
{
	std::cout << "Brain: default constructor" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor" << std::endl;
}