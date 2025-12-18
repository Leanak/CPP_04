/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:58:16 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 12:39:10 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class	MateriaSource : public ImateriaSource
{
	private:
		AMateria	*materiaTemplates[4];
	public:
		//Default constructor
		MateriaSource(void);
		//Copy constructor
		MateriaSource(const MateriaSource &other);
		//Destructor
		virtual ~MateriaSource(void);
		MateriaSource &operator=(const MateriaSource &other);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const &type);
};
