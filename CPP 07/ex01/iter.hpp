/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:54:58 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/14 17:20:51 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T, typename U>
void iter(T* val1, int len, void(* func)(U&))
{
    for (int i = 0; i < len; i++)
        func(val1[i]);
        //std::cout << val1[i] << std::endl;
   // (void)func;
}