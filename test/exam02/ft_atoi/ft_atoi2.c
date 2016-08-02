/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 12:45:31 by yso               #+#    #+#             */
/*   Updated: 2016/07/29 12:45:34 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int negativeToggle;

	nbr = 0;
	negativeToggle = 0;
	i = 0;
	while ((str[i] < 33) || (str[i] == ' ') || (str[i] == '\n'))
	{
		i++;
	}
	if (str[i] == '-')
	{
		negativeToggle = 1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (negativeToggle == 1)
		return (-nbr);
	else
		return (nbr);
}

int main(void)
{
	ft_putnbr(ft_atoi("-4221111abcdef"));
	return (0);
}