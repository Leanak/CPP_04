/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:25:21 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:24:17 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongClass.hpp"

int	main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const WrongAnimal* k = new WrongCat(); 
	const WrongAnimal* beta = new WrongAnimal();
	
	Dog	Medor;
	Cat	Berlioz;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << beta->getType() << std::endl;
	
	std::cout << "\n\n";

	std::cout << Medor.getType() << std::endl;
	Medor.makeSound();
	std::cout << Berlioz.getType() << std::endl;
	Berlioz.makeSound();

	std::cout << "\n\n";
	
	i->makeSound();
	j->makeSound();
	k->makeSound();

	delete meta;
	delete beta;
	delete i;
	delete j;
	delete k;
	
	return 0;
}