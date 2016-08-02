/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtest2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 16:34:31 by yso               #+#    #+#             */
/*   Updated: 2016/07/25 16:34:33 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char stringCopy(char *str)
{
	char *newStr;
	int arrLength;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		arrLength++;
		i++;
	}

	newStr = (char*)malloc(sizeof(char) * (arrLength + 1));

	i = 0;
	while (str[i] != '\0')
	{
		newStr[i] = str[i];
		i++;
	}

	return (newStr);
}

int main(int argc, char **argv)
{
	char **newArray;
	int argLength;
	int i;
	int j;

	argLength = argc - 1;

	i = 1;
	while (i < argLength)
	{
		newArray[i - 1] = stringCopy(argv[i]);
		i++;
	}
	
	i = 0; 
	j = 0;
	while (newArray[i] != '\0')
	{
		while(newArray[i][j] != '\0')
		{
			ft_putchar(newArray[i][j]);
			j++;
		}
		i++;
	}

	return (0);
}



