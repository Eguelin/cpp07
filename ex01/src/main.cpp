/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:48:04 by eguelin           #+#    #+#             */
/*   Updated: 2023/12/07 18:58:15 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	char tab[] = { '0', '1', '2', '3', '4' };

	iter<char, void>(tab, 5, ft_print);
	std::cout << std::endl;

	int tab1[] = { 0, 1, 2, 3, 4 };

	iter<int, void>(tab1, 5, ft_print);
	std::cout << std::endl;

	float tab2[] = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f };

	iter<float, void>(tab2, 5, ft_print);
	std::cout << std::endl;

	std::string tab3[] = { "0", "1", "2", "3", "4" };

	iter<std::string, void>(tab3, 5, ft_print);
	std::cout << std::endl;

	return (0);
}
