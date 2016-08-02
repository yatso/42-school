/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:13:48 by mhurd             #+#    #+#             */
/*   Updated: 2016/07/22 23:13:51 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

/*
** Global vars for optimization
** count keeps the number of solutions
** If count > 1, then break out of the backtrack
** Store a copy of the solution in solution
*/

int g_count;
int **g_solution;

/*
** Finds the next unfilled slot on the sudoku board.
** Board size is assumed to be 9x9
** A valid slot should be == 0
*/

int		find_next_slot(int **arr, int y_pos, int x_pos)
{
	if (x_pos == 8)
	{
		y_pos++;
		x_pos = -1;
	}
	y_pos--;
	while (++y_pos < 9)
	{
		while (++x_pos < 9)
			if (!arr[y_pos][x_pos])
				return (y_pos * 9 + x_pos);
		x_pos = -1;
	}
	return (-1);
}

/*
** Makes a deep copy of an array
** Should only be used for the solution to avoid excess memory usage
*/

int		**deep_copy(int **ar)
{
	int **cp;
	int x;
	int y;

	x = -1;
	cp = (int **)malloc(9 * sizeof(int *));
	while (++x < 9)
	{
		cp[x] = (int *)malloc(9 * sizeof(int));
		y = -1;
		while (++y < 9)
		{
			cp[x][y] = ar[x][y];
		}
	}
	return (cp);
}

/*
** Use backtracking and prints out any valid board
** Should only be called after checking that the starting board is valid
** Uses a global variable to keep track of the count
** If count > 1, break out of the recurse
*/

void	backtrack(int **arr, int y_pos, int x_pos)
{
	int i;
	int next;

	i = 0;
	if (g_count > 1)
		return ;
	next = find_next_slot(arr, y_pos, x_pos);
	if (next == -1 && test_new_board(arr, 1))
	{
		g_count++;
		g_solution = deep_copy(arr);
	}
	else
	{
		if (next != -1)
		{
			while (g_count <= 1 && ++i <= 9)
			{
				arr[next / 9][next % 9] = i;
				if (test_new_number(arr, next / 9, next % 9))
					backtrack(arr, next / 9, next % 9);
			}
			arr[next / 9][next % 9] = 0;
		}
	}
}

/*
** Runs Error() if the following are not true:
** *There are 9 arguments
** *There are no unexpected characters
** *Each argument has 9 characters
** *The new board is a valid starting state:
** **17 or more numbers are given
** **No numbers invalidate each other
** *There is 1, and only 1, valid solution
**
** If all of the above are true, it will print the board
*/

int		main(int ac, char **av)
{
	int **test;

	if (ac == 10)
	{
		test = parse_lines(av + 1);
		if (test)
		{
			if (test_new_board(test, 0))
			{
				g_count = 0;
				backtrack(test, 0, -1);
				if (g_count == 1)
					print_solution(g_solution);
				else
					error();
			}
			else
				error();
		}
		else
			error();
	}
	else
		error();
	return (0);
}
