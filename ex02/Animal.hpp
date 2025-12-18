/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:09:59 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:05:39 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		virtual std::string getType(void) const;
		virtual void makeSound(void) const =0 ;
		Animal	&operator=(const Animal &other);
		Animal(const Animal &other);
		Animal(void);
		virtual ~Animal(void);
};

