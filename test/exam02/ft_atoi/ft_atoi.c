/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 20:50:17 by yso               #+#    #+#             */
/*   Updated: 2016/07/28 20:50:19 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		ft_isnum(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_atoi(char *str)
{
	int nbr;
	int i;
	int neg;

	nbr = 0;
	i = 0;
	neg = 1;
	while ((str[i] < 33) || (str[i] == '\n') || (str[i] == ' '))
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (ft_isnum(str[i]) == 1)
	{
		nbr *= 10;
		nbr += (str[i] - 48) * neg;
		i++;
	}
	return (nbr);
}

int		main(void)
{
	int resultnbr;

	resultnbr = ft_atoi("42strings");
	ft_putnbr(resultnbr);
	ft_putchar('\n');
	return (0);
}
