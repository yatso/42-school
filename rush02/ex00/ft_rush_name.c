/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_name.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 23:34:26 by zbeasley          #+#    #+#             */
/*   Updated: 2016/07/31 23:34:30 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush_ref_output.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 10) != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putdimensions(int x, int y)
{
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_rush_name(int k, int x, int y)
{
	if (k == 0)
		ft_putstr("[rush-00] [");
	if (k == 1)
		ft_putstr("[rush-01] [");
	if (k == 2 || k == 15 || k == 5 || k == 12)
		ft_putstr("[rush-02] [");
	if (k == 3 || k == 13)
		ft_putstr("[rush-03] [");
	if (k == 10)
		ft_putstr("[rush-04] [");
	ft_putdimensions(x, y);
	if (k == 5)
		ft_putstr(" || [rush-03] [");
	if (k == 12)
		ft_putstr(" || [rush-04] [");
	if (k == 15)
	{
		ft_putstr(" || [rush-03] [");
		ft_putdimensions(x, y);
		ft_putstr(" || [rush-04] [");
	}
	if (k == 13)
		ft_putstr(" || [rush-04] [");
	if (k >= 5 && k != 10)
		ft_putdimensions(x, y);
}
