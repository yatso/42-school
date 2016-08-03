/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:46:39 by yso               #+#    #+#             */
/*   Updated: 2016/07/31 18:46:42 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush_ref_output.h"

char	*rush01_store_first_line(int x, int i, char *str)
{
	int col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			str[i] = '/';
		if (col == x && x != 1)
			str[i] = '\\';
		if (col != 1 && col != x)
			str[i] = '*';
		col = col + 1;
		i++;
	}
	str[i] = '\n';
	return (str);
}

char	*rush01_store_middle_line(int x, int i, char *str)
{
	int var;

	var = 1;
	while (var <= x)
	{
		if (var == 1 || var == x)
			str[i] = '*';
		else
			str[i] = ' ';
		var++;
		i++;
	}
	str[i] = '\n';
	return (str);
}

char	*rush01_store_last_line(int x, int i, char *str)
{
	int var;

	var = 1;
	while (var <= x)
	{
		if (var == 1)
		{
			str[i] = '\\';
		}
		if (var == x && x != 1)
		{
			str[i] = '/';
		}
		else if (var != 1 && var != x)
		{
			str[i] = '*';
		}
		var++;
		i++;
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	return (str);
}

char	*ft_rush01(int x, int y)
{
	int		row;
	int		i;
	char	*compare_str;

	i = 0;
	row = 1;
	compare_str = (char*)malloc((x * y) + y + 1);
	while (row <= y)
	{
		if (row == 1)
		{
			compare_str = rush01_store_first_line(x, i, compare_str);
			i = i + x + 1;
		}
		else if (row < y)
		{
			compare_str = rush01_store_middle_line(x, i, compare_str);
			i = i + x + 1;
		}
		row++;
	}
	if (y != 1)
		compare_str = rush01_store_last_line(x, i, compare_str);
	return (compare_str);
}
