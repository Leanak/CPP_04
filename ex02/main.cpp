/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:04:59 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 18:26:45 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongClass.hpp"

int	main(void)
{
	const int	size = 10;
	const Animal**	array = new const Animal*[size];
	const Dog	*Dog1 = new Dog;
	const Dog	Dog2(*Dog1);

	std::cout << "Address dog1: " << Dog1;
	std::cout << "Adress Brain dog1: ";
	Dog1->printBrain();
	std::cout << "Adress Brain dog2: ";
	Dog2.printBrain();

	for (int i = 0; i < size/2 ; i++)
		array[i] = new Dog();
	for (int i = size/2; i < size; i++)
		array[i] = new Cat();
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Type: " << array[i]->getType() << std::endl;
		array[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
	{
		delete	array[i];
	}
	delete[] array;
	return 0;
}
