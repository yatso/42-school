/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 17:30:25 by yso               #+#    #+#             */
/*   Updated: 2016/07/17 17:30:30 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

void	rushrow(int x, int y, int dc, int ar)
{
	if (x > 1)
	{
		while (ar <= x)
		{
			if (ar == 1)
			{
				ft_putchar('/');
			}
			if (ar != 1 && ar != y)
			{
				ft_putchar('*');
			}
			if (ar == x)
			{
				ft_putchar('\\');
				ft_putchar(10);
			}
			ar++;
		}
	}
}

void	rushcolumn(int x, int y, int dc, int ar)
{
	if (y > 1)
	{
		while (dc <= y)
		{
			if (dc == 1)
			{
				ft_putchar('/');
			}
			if (dc != 1 && dc != y)
			{
				ft_putchar('*');
			}
			if (dc == y)
			{
				ft_putchar('\\');
			}
			ft_putchar(10);
			dc++;
		}
		if (x > 1)
		{
			rushrow(x, y, dc, ar);
			return ;
		}
	}
}

void	conditionalmain(int x, int y, int dc, int ar)
{
	if ((ar == 1 && dc == 1) || (ar == x && dc == y))
	{
		ft_putchar('/');
	}
	else if ((ar == 1 && dc == y) || (ar == x && dc == 1))
	{
		ft_putchar('\\');
	}
	else if (!(ar == 1 || ar == x) && (dc == 1 || dc == y))
	{
		ft_putchar('*');
	}
	else if ((ar == 1 || ar == x) && !(dc == 1 || dc == y))
	{
		ft_putchar('*');
	}
	else if (!(ar == 1 || ar == x) && !(dc == 1 || dc == y))
	{
		ft_putchar(' ');
	}
}

void	rushmain(int x, int y, int dc, int ar)
{
	while (dc <= y)
	{
		while (ar <= x)
		{
			conditionalmain(x, y, dc, ar);
			ar++;
		}
		dc++;
		ft_putchar(10);
		ar = 1;
	}
}

void	rush01(int x, int y)
{
	int dc;
	int ar;

	dc = 1;
	ar = 1;
	if (y <= 0 || x <= 0)
	{
		return ;
	}
	if (((y == 1) && (x > 1)) || ((y > 1) && (x == 1)))
	{
		rushcolumn(x, y, dc, ar);
		return ;
	}
	rushmain(x, y, dc, ar);
}
