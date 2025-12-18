/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:31:31 by lenakach          #+#    #+#             */
/*   Updated: 2025/12/18 16:35:35 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Brain
{
	private:
		std::string ideas[400];
	public:
		~Brain(void);
		Brain(void);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
};
