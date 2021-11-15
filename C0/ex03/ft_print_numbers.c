/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 07:46:53 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/26 07:55:00 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_numbers(void)

{
	char	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i ++;
	}
}
