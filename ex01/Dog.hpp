/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:26:25 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 18:14:21 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain* _dogIdeas;
	public:
		Dog(void);
		Dog(const Dog &other);
		~Dog(void);
		Dog	&operator=(const Dog &other);
		void	makeSound(void) const;
		void	printBrain(void) const;
};
