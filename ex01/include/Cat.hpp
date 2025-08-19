/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:11:20 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 12:07:34 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
		
		void makeSound() const;
	};

#endif