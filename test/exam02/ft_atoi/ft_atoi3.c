/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 13:32:01 by yso               #+#    #+#             */
/*   Updated: 2016/07/29 13:32:04 by yso              ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int i;
	int negToggle;
	int nbr;

	i = 0;
	negToggle = 0;
	nbr = 0;

	while(str[i] < 33 || str[i] == ' ' || str[i] == '\n')
	{
		i++;
	}
	if (str[i] == '-')
	{
		negToggle = 1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (negToggle == 1)
	{
		return (-nbr);
	}
	else
	{
		return (nbr);
	}
}

int main(void)
{
	ft_putnbr(ft_atoi("  -42281sdkj"));
	ft_putchar('\n');
	return (0);
}