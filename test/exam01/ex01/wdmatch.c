/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 14:54:56 by yso               #+#    #+#             */
/*   Updated: 2016/07/22 14:54:58 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) 
{
	write(1, &c, 1);
}

int	wdmatch(char *s1, char *s2)
{
	int position;

	position = 0;

	while (s1[position] == s2[position])
	{
		if (s1[position] == '\0' || s2[position] == '\0')
		{
			break;
		}
		position++;
	}

	if (s1[position] == '\0' && s2[position] == '\0')
	{
		return (0);
	}
	else
	{
		return -1;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	int result;
	
	result = wdmatch(argv[1], argv[2]);
	ft_putchar((result + '0'));

	return (0);
}
