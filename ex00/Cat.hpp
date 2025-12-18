/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:19:42 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:19:38 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		void makeSound(void) const;
		Cat &operator=(const Cat &other);
		Cat(const Cat &other);
		Cat(void);
		~Cat(void);
};