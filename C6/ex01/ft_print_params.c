/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:45:17 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/04 18:56:22 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 0;
	if (argc > i)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				c = argv[i][j];
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
