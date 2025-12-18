/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:59:40 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:19:45 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		std::string getType(void) const;
		virtual void makeSound(void) const;
		WrongAnimal	&operator=(const WrongAnimal &other);
		WrongAnimal(const Animal &other);
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
};

class	WrongCat: public WrongAnimal
{
	public:
		std::string getType(void) const;
		void makeSound(void) const;
		WrongCat &operator=(const WrongCat &other);
		WrongCat(const WrongCat &other);
		WrongCat(void);
		~WrongCat(void);
};