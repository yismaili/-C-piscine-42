/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:22:49 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/26 10:58:29 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)

{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (a < '7')
	{
		a ++;
		 b = a;
		while (b < '8')
		{
			b ++;
			c = b;
			while (c < '9')
			{
				c ++;
				ft_print(a, b, c);
			}
		}
	}
}
