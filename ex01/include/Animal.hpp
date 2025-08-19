/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:09:52 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 10:10:03 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string animalType);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
};

# endif