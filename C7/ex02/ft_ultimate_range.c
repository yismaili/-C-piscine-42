/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:52:16 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/09 21:12:34 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		range[0][i] = min++;
		i++;
	}
	return (size);
}
/*int main(void)
{
    int min =50;
    int max = 30;
	int *ptr = NULL;
    int size = ft_ultimate_range(&ptr,min,max);
	int i = 0;
    while(i < size)
    {
        printf("%d\n",ptr[i]);
        i++;
    }
    return 0;
}*/
