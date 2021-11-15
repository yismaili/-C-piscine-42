/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:05:15 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/27 14:08:04 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	size --;
	while (i < size)
	{
		a = tab[i];
		tab[i] = tab[size];
		tab[size] = a;
		i ++;
		size --;
	}
}
