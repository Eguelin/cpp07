/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:50:00 by eguelin           #+#    #+#             */
/*   Updated: 2023/12/07 18:53:58 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename T2>
void	iter( T *tab, size_t len, T2(*ft)( const T ) )
{
	size_t	i = 0;

	while (i < len)
		ft(tab[i++]);
}

template <typename T>
void	ft_print( const T src )
{
	std::cout << src << " ";
}
