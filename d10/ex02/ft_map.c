/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:20:21 by yso               #+#    #+#             */
/*   Updated: 2016/07/26 21:20:24 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *result;

	i = 0;
	result = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
