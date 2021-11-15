/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:10:57 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/01 09:20:09 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			else
			{
				j ++;
			}
		}
		i ++;
	}
	return (0);
}
