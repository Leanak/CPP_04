/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:26:55 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 18:14:00 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	_catIdeas;
	public:
		Cat(void);
		Cat(const Cat &other);
		~Cat(void);
		Cat &operator=(const Cat &other);
		void	makeSound(void) const;
		void	printBrain(void) const;
	};

