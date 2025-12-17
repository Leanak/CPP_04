/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:18:41 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 15:14:59 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal &other);
		virtual ~Animal(void);
		Animal	&operator=(const Animal &other);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};
