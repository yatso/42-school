/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:58:49 by yso               #+#    #+#             */
/*   Updated: 2016/07/19 20:05:55 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	// convert to string
	// convert to character
	// print it out
	char firstDigit;
	char secondDigit;

	firstDigit = (nb / 10) + '0';
	secondDigit = (nb % 10) + '0';

	ft_putchar(firstDigit);
	ft_putchar(secondDigit);
	
}

int main(void)
{
	ft_putnbr(42);
	return (0);
}

