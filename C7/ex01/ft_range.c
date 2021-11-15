/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:47:51 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/09 17:50:34 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*reng;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	reng = malloc(size * sizeof(int));
	if (reng == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		reng[i] = min++;
		i++;
	}
	return (reng);
}
