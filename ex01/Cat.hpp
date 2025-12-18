/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:19:42 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:43:37 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	_catBrain;
	public:
		void makeSound(void) const;
		Cat &operator=(const Cat &other);
		Cat(const Cat &other);
		Cat(void);
		~Cat(void);
};