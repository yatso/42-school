/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:46:41 by yso               #+#    #+#             */
/*   Updated: 2016/07/16 22:39:50 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power)
	{
		product = product * nb;
		power = power - 1;
	}
	return (product);
}
