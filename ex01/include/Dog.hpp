/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:12:07 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 12:07:15 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
		
		void makeSound() const;
};

#endif