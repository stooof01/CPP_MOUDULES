/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:58:32 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/24 16:45:25 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main (void) {
    Zombie* obj = zombieHorde(5, "SUU");
    for (int i = 0; i < 5; i++)
        obj[i].anounce();

    delete [] obj;
}