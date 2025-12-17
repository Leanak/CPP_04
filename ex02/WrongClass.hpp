/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:03:20 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 15:22:13 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal &other);
		virtual void makeSound(void) const;
		std::string	getType(void) const;
};

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &other);
		virtual ~WrongCat(void);
		WrongCat &operator=(const WrongCat &other);
		void makeSound(void) const;
};
