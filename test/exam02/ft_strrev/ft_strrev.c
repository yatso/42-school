/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 16:26:45 by yso               #+#    #+#             */
/*   Updated: 2016/07/29 16:26:47 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strrev(char *str)
{
	int len;
	int i;
	int j; 
	char *revstr;

	len = 0;
	while (str[len])
	{
		len++;
	}
	i = len - 1;
	j = 0;
	while(i >= 0)
	{
		revstr[j] = str[i];
		i--;
		j++;
	}
	return (revstr);
}

int		main(void)
{
	ft_putstr(ft_strrev("Hello"));
	ft_putchar('\n');
	return (0);
}

