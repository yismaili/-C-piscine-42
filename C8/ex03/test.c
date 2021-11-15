/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:44:18 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/13 09:50:24 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
printf("%d",point.x);
return (0);
}
