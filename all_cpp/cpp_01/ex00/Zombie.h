/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:13:22 by sriyani           #+#    #+#             */
/*   Updated: 2022/12/21 17:15:17 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump( std::string name );

#endif