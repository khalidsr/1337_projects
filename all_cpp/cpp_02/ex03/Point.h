/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:46:46 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/07 16:32:38 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Point.hpp"
#include <iostream>
#include <cmath>
#include "Fixed.h"

Fixed abc_area( Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif