/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:50:00 by eguelin           #+#    #+#             */
/*   Updated: 2023/12/09 15:17:40 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename I, typename R>
void	iter( T *tab, I len, R (*ft)( const T ) )
{
	for (I i = 0; i < len ; i++)
		ft(tab[i]);
}

template <typename T>
void	ft_print( const T src )
{
	std::cout << src << " ";
}

#endif
