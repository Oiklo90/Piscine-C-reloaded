/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:16:59 by llonger           #+#    #+#             */
/*   Updated: 2017/11/06 14:17:00 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fact;

	fact = nb - 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb >= 13 || nb < 1)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
