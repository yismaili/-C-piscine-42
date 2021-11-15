/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:33:06 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/04 15:42:54 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		c;
	char	ch;

	i = 0;
	c = 0;
	if (argc > 0)
	{
		while (argv[c][i] != '\0')
		{
			ch = argv[c][i];
			write(1, &ch, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
