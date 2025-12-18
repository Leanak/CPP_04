/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:12:42 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:05:21 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain* _dogBrain;
	public:
		void makeSound(void) const;
		Dog &operator=(const Dog &other);
		Dog(const Dog &other);
		Dog(void);
		~Dog(void);
};

