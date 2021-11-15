/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:08:39 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/27 09:28:52 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	hld;

	a = 0;
	j = 1;
	hld = tab[i];
	while (i < size)
	{
		j = i + 1;
		while (i < size)
		{
			hld = tab[i];
			tab[i] = tab[j];
			tab[j] = hld;
		}
		i++;
	}
	j++;
}
