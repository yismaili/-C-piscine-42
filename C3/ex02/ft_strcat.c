/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:22:19 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/01 09:30:10 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count ++;
		str ++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = ft_str(dest);
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
