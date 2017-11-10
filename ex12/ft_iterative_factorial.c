/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:07:58 by llonger           #+#    #+#             */
/*   Updated: 2017/11/06 14:08:00 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb - 1;
	if (nb > 0 && nb <= 12)
	{
		while (nb > 0 && nb <= 2147483647 && fact > 0)
		{
			nb = nb * fact;
			fact = fact - 1;
		}
		if (nb > -2147483648 && nb < 2147483647)
		{
			return (nb);
		}
	}
	if (nb == 0)
		return (1);
	return (0);
}
