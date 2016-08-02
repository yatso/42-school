/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 16:09:35 by yso               #+#    #+#             */
/*   Updated: 2016/07/29 16:09:36 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

int		ft_strlen(char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[i])
	{
		length++;
		i++;
	}
	return length;
}

int		main(void)
{
	ft_putnbr(ft_strlen("This is a test string"));
	ft_putchar('\n');
	return (0);
}
