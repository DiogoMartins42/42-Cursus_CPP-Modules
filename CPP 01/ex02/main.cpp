/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:06:41 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/21 14:06:46 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << " - " << str << std::endl;
    std::cout << &stringPTR << " - " << *stringPTR << std::endl;
    std::cout << &stringREF << " - " << stringREF << std::endl;

    return 0;
}
