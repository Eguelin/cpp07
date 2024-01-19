/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:48:04 by eguelin           #+#    #+#             */
/*   Updated: 2024/01/19 14:40:20 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	ft_print( T &src )
{
	std::cout << src << " ";
}

int main( void )
{
	char tab[] = { '0', '1', '2', '3', '4' };

	iter(tab, 5, ft_print<const char>);
	std::cout << std::endl;

	int tab1[] = { 0, 1, 2, 3, 4 };

	iter(tab1, 5, ft_print<int>);
	std::cout << std::endl;

	float tab2[] = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f };

	iter(tab2, 5, ft_print<float>);
	std::cout << std::endl;

	std::string tab3[] = { "0", "1", "2", "3", "4" };

	iter(tab3, 5, ft_print<std::string>);
	std::cout << std::endl;

	std::string tab4 = "01234";

	iter(tab4.c_str(), tab4.length(), ft_print<const char>);
	std::cout << std::endl;

	return (0);
}
