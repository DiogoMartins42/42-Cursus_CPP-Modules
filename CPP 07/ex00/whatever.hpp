/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:36:52 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/14 16:48:45 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T& val1, T& val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
}

template<typename T>
T min(T& val1, T& val2)
{
    if (val1 > val2)
        return (val2);
    return (val1);
}

template<typename T>
T max(T& val1, T& val2)
{
    if (val1 > val2)
        return (val1);
    return (val2);
}

