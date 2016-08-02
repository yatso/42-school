/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 17:30:25 by yso               #+#    #+#             */
/*   Updated: 2016/07/17 22:34:48 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

// for horizontal skinny
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

// for vertical skinny
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
			rushrow(x, y, dc, ar); // if it's not a column then it funnels into horizontal skinny
			return ;
		}
	}
}

// checks what should be printed
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

// like a cursor position
void	rushmain(int x, int y, int dc, int ar) // ex: (x = 5, y = 3, dc = 1 , ar = 1)
{
	while (dc <= y)
	{
		while (ar <= x) // if cursor is within both x and y limits, then it funnels into conditional main.
		{
			conditionalmain(x, y, dc, ar); // the same variables gets passed to conditional main.
			ar++; // after conditionalmain finishes, adds +1 to the go right cursor to move right 1 position.
		}
		dc++; // after the go right while loop finishes, adds +1 to the go down cursor to start at next line.
		ft_putchar(10); //ascii character 10 equals line feed which moves the cursor down to the next line.
		ar = 1; //resets cursor to all the way to the left
	}
}

// funnel for special cases or normal cases
void	rush01(int x, int y) // ex: (x = 5, y = 3)
{
	int dc; // go down
	int ar; // go right

	dc = 1; //starts at top left corner
	ar = 1;
	if (y <= 0 || x <= 0) // if x or y is negative or 0, app ends.
	{
		return ;
	}
	if (((y == 1) && (x > 1)) || ((y > 1) && (x == 1))) //funnels into vertical skinny/ horizontal skinny
	{
		rushcolumn(x, y, dc, ar);
		return ;
	}
	rushmain(x, y, dc, ar); // everything else funnels into rushmain function.
}
