/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:08:51 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/14 14:30:43 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
   Data* data = new Data;
   uintptr_t holder;

   std::cout<< data << std::endl;
   holder = Serializer::serialize(data);

   std::cout << holder << std::endl;

   data = Serializer::deserialize(holder);
   std::cout << data << std::endl;

   delete data;
   return (0);
}