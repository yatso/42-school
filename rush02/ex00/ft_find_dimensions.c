/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_dimensions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 23:25:04 by yso               #+#    #+#             */
/*   Updated: 2016/07/31 23:25:07 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_ref_output.h"

int	find_height(char *str)
{
	int i;
	int lines;

	i = 0;
	lines = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			lines++;
		i++;
	}
	return (lines);
}

int	find_width(char *str)
{
	int width;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			width = i;
			return (width);
		}
		i++;
	}
	return (0);
}
