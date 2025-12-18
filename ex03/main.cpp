/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:05:53 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 18:08:00 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
    std::cout << "----- Création de la source -----" << std::endl;
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "\n----- Création des personnages -----" << std::endl;
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");

    std::cout << "\n----- Création et équipement des materias -----" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "\n----- Utilisation des materias -----" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "\n----- Tests supplémentaires -----" << std::endl;

    // Test index invalide
    me->use(3, *bob);

    // Test une materia inconnue
    tmp = src->createMateria("fire");
    if (!tmp)
        std::cout << "Materia inconnue non créée" << std::endl;

    // Test unequip
    me->unequip(0);
    me->use(0, *bob);

    std::cout << "\n----- Destruction -----" << std::endl;
    delete bob;
    delete me;
    delete src;

    return 0;
}
