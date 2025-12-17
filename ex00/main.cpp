/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:04:59 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 15:21:48 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongClass.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const WrongAnimal*	beta = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();
	
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << beta->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	
	std::cout << "\n\n";
	
	j->makeSound();
	i->makeSound();
	k->makeSound();
	
	beta->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	delete beta;
	return 0;
}
