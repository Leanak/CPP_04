/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:12:42 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:19:35 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma omce
#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		void makeSound(void) const;
		Dog &operator=(const Dog &other);
		Dog(const Dog &other);
		Dog(void);
		~Dog(void);
};
