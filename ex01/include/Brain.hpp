/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:17:59 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 10:38:06 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(); // Constructor x defecto
		Brain(const Brain& other); // Constructor x copia
		Brain& operator=(const Brain& other); // Operador de igualacion
		~Brain(); // Destructor x defecto

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

# endif



