/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:27:18 by mhurd             #+#    #+#             */
/*   Updated: 2016/07/23 13:27:31 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Prints out a 9x9 int array
** Any different size will probably crash and burn
*/

int		print_solution(int **arr)
{
	int i;
	int x;

	i = -1;
	x = -1;
	while (++i < 9)
	{
		x = -1;
		while (++x < 9)
		{
			ft_putchar(arr[i][x] + '0');
			if (x < 8)
				ft_putchar(' ');
		}
		write(1, "\n", 1);
	}
	return (1);
}

void	error(void)
{
	write(1, "Error\n", 6);
}
