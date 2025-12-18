/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:25:21 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 17:09:14 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongClass.hpp"

int	main(void)
{
	const int size = 10;
	const Animal**	array = new const Animal*[size];

	for (int i = 0; i < size/2; i++)
		array[i] = new Dog();
	for (int i = size/2; i < size; i++)
		array[i] = new Cat();
	for (int i = 0; i < size; i++)
	{
		array[i]->makeSound();
		std::cout << array[i]->getType() << std::endl;
	}
	for (int i = 0; i < size; i++)
		delete array[i];
	delete[] array;
	return 0;
}
