/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 22:47:11 by mhurd             #+#    #+#             */
/*   Updated: 2016/07/22 22:55:51 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

/*
** Turns an array of chars into an array of ints
** Allocates space for 9 ints
** Returns the array, UNLESS
** *There is a character that is not '0' -'9' or '.'
** *There is (somehow) not 9 characters
*/

int		*parse_line(char *line)
{
	int *ar;
	int i;

	i = -1;
	ar = (int *)malloc(9 * sizeof(int));
	while (line[++i])
	{
		if (line[i] == '.')
			ar[i] = 0;
		else if (line[i] >= '0' && line[i] <= '9')
			ar[i] = line[i] - '0';
		else
			return ((int *)0);
	}
	if (i != 9)
		return ((int *)0);
	return (ar);
}

/*
** Counts the number of numbers in an array of numbers
** Oh yeah, it only counts numbers that aren't 0
*/

int		count_nums(int **arr)
{
	int x;
	int y;
	int count;

	count = 0;
	y = -1;
	while (++y < 9)
	{
		x = -1;
		while (++x < 9)
		{
			if (arr[y][x] != 0)
				count++;
		}
	}
	return (count);
}

/*
** Parses the arguments
** Allocates space for 9 (int *)
** It's not null-terminated, so be careful!
** Runs parse_line for each line, putting it into the array
**
** Returns the array, UNLESS:
** *There not 9 lines (something went wrong)
** *There are less than 17 numbers (must be multiple solutions)
*/

int		**parse_lines(char **lines)
{
	int **array;
	int i;

	i = -1;
	array = (int **)malloc(9 * sizeof(int *));
	while (++i < 9 && lines[i])
	{
		array[i] = parse_line(lines[i]);
		if (array[i] == (int *)0)
			return ((int **)0);
	}
	if (i != 9 || count_nums(array) <= 16)
		return ((int **)0);
	return (array);
}
