/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 23:04:58 by zbeasley          #+#    #+#             */
/*   Updated: 2016/07/31 23:05:01 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "rush_ref_output.h"

char	*read_rush(void)
{
	char	buf[2];
	char	*str;
	int		i;
	int		x;
	int		y;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (INTBOUND * INTBOUND) + (INTBOUND) + 1)))
		return (0);
	while (read(0, buf, 1) != 0)
	{
		buf[1] = '\0';
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	x = find_width(str);
	y = find_height(str);
	ft_what_rush(str, x, y);
	return (str);
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_what_rush(char *str, int x, int y)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if ((ft_strcmp(str, ft_rush00(x, y))) == 0)
		ft_rush_name(0, x, y + (k++ * 0));
	if ((ft_strcmp(str, ft_rush01(x, y))) == 0)
		ft_rush_name(1, x, y + (k++ * 0));
	if ((ft_strcmp(str, ft_rush02(x, y))) == 0)
		k = 2;
	if ((ft_strcmp(str, ft_rush03(x, y))) == 0)
		k = k + 3;
	if ((ft_strcmp(str, ft_rush04(x, y))) == 0)
		k = k + 10;
	if (k > 1)
		ft_rush_name(k, x, y);
	else if (k == 0)
		ft_putstr("Not a valid rush");
	ft_putchar('\n');
}

int		main(void)
{
	read_rush();
	return (0);
}
