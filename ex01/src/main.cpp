/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:48:04 by eguelin           #+#    #+#             */
/*   Updated: 2023/12/07 19:46:39 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	char tab[] = { '0', '1', '2', '3', '4' };

	iter<char, size_t, void>(tab, 5, ft_print);
	std::cout << std::endl;

	int tab1[] = { 0, 1, 2, 3, 4 };

	iter<int, size_t, void>(tab1, 5, ft_print);
	std::cout << std::endl;

	float tab2[] = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f };

	iter<float, size_t, void>(tab2, 5, ft_print);
	std::cout << std::endl;

	std::string tab3[] = { "0", "1", "2", "3", "4" };

	iter<std::string, size_t, void>(tab3, 5, ft_print);
	std::cout << std::endl;

	std::string tab4 = "01234";

	iter<const char, size_t, void>(tab4.c_str(), tab4.length(), ft_print);
	std::cout << std::endl;

	return (0);
}
