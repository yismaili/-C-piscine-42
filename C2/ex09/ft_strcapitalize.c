/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:13:08 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/28 18:33:05 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str <= 'Z' && *str >= 'A')
		{
			*str = *str + ('a' - 'A');
		}
		str++;
		i++;
	}
	return (str - i);
}

int	ft_is_alpha_num(char c)
{
	int	i;

	i = 0;
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		i = 1;
	}
	else if (c <= '9' && c >= '0')
	{
		i = 1;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	ch;
	int	i;

	ft_strlowcase(str);
	ch = 1;
	i = 0;
	while (*str)
	{
		if (*str <= '9' && *str >= '0')
		{
			ch = 0;
		}
		if (ch && (*str <= 'z' && *str >= 'a'))
		{
			*str = *str - ('a' - 'A');
			ch = 0;
		}
		if (!ft_is_alpha_num(*str))
		{
			ch = 1;
		}
		str++;
		i++;
	}
	return (str - i);
}
