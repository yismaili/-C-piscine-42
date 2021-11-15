/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:51:12 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/05 14:47:48 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
	write(1, "\n", 1);
}

int	ft_cnt(char *str1, char *str2)
{
	while ((*str1 == *str2) && *str1)
	{
		str1 ++;
		str2 ++;
	}
	return (*str1 - *str2);
}

void	ft_print(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putchar(argv[i]);
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swp;

	i = 1;
	while (i < argc)
	{
		j = i+ 1;
		while (j < argc)
		{
			if (ft_cnt(argv[i], argv[j]) > 0)
			{
				swp = argv[i];
				argv[i] = argv[j];
				argv[j] = swp;
			}
			j ++;
		}
		i ++;
	}
	ft_print(argc, argv);
	return (0);
}
