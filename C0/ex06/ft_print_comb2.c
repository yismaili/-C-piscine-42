/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:18:34 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/26 08:04:48 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_comb2(void)

{
	int	tbl[2];

	tbl[0] = -1;
	while (tbl[0] < 98)
	{
		tbl[0]++;
		tbl[1] = tbl[0];
		while (tbl[1] < 99)
		{	
			tbl[1]++;
			ft_putchar((tbl[0] / 10 ) + 48);
			ft_putchar((tbl[0] % 10) + 48);
			ft_putchar(' ');
			ft_putchar((tbl[1] / 10) + 48);
			ft_putchar((tbl[1] % 10) + 48);
			if (tbl[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}	
}
