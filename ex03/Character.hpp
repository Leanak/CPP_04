/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:09:56 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/17 20:33:26 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		std::string _name;
		AMateria	*inventory[4];
	public:
		//Default constructor
		Character(void);
		//Copy constructor
		Character(const Character &other);
		//Destructor
		virtual ~Character(void);
		Character(const std::string name);
		Character &operator=(const Character &other);
		std::string const &getName() const;
	 	void equip(AMateria *m);
	 	void unequip(int idx);
	 	void use(int idx, ICharacter &target);
};