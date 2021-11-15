/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:00:58 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/03 21:17:18 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rslt;

	rslt = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1 )
	{
		return (1);
	}
	while (nb > 0)
	{
		rslt *= nb;
		nb --;
	}
	return (rslt);
}
