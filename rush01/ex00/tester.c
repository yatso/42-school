/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:14:07 by mhurd             #+#    #+#             */
/*   Updated: 2016/07/22 23:16:50 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

/*
** Tests to make sure that the numbers in the 3x3 grid are correct
** The top left of the grid is at ((x_pos / 3) * 3), ((y_pos / 3) * 3)
** The position in the grid is by adding either (x_pos % 3) or (y_pos % 3)
** Returns INVALID (0) if any numbers match the current number
** Otherwise, returns VALID (1)
*/

int		test_square(int **ar, int y_pos, int x_pos)
{
	int i;

	i = -1;
	while (++i < 9)
	{
		if ((y_pos / 3) * 3 + (i / 3) != y_pos
			|| (x_pos / 3) * 3 + i % 3 != x_pos)
		{
			if (ar[(y_pos / 3) * 3 + (i / 3)][(x_pos / 3) * 3 + i % 3]
				== ar[y_pos][x_pos])
				return (INVALID);
		}
	}
	return (VALID);
}

/*
** Tests to make sure there are no matching numbers in the row or column
** Runs test_square to test the other numbers in the 3x3 grid
*/

int		test_new_number(int **ar, int y_pos, int x_pos)
{
	int i;

	i = -1;
	while (++i < 9)
		if (i != x_pos && ar[y_pos][i] == ar[y_pos][x_pos])
			return (INVALID);
	i = -1;
	while (++i < 9)
		if (i != y_pos && ar[i][x_pos] == ar[y_pos][x_pos])
			return (INVALID);
	if (!test_square(ar, y_pos, x_pos))
		return (INVALID);
	return (VALID);
}

/*
** Runs test_new_number on ever number in the array
** If finished is 1, it will return INVALID if there are any 0's
** Otherwise, 0s are ignored
*/

int		test_new_board(int **ar, int finished)
{
	int x;
	int y;

	y = -1;
	while (++y < 9)
	{
		x = -1;
		while (++x < 9)
		{
			if (finished && !ar[y][x])
				return (INVALID);
			if (ar[y][x] && !test_new_number(ar, y, x))
				return (INVALID);
		}
	}
	return (VALID);
}
