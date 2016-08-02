/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 16:33:21 by yso               #+#    #+#             */
/*   Updated: 2016/07/23 16:33:23 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>//
#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	char	**str_split;
	char	**str_tmp;
	int		len;
	int		i;
	int		count_word;

	count_word = 0;
	len = 0;
	i = 0;
	while (str)
	{
		if (str[len] != 9 || str[len] != 32 || str[len] != '\n')
			count_word++;
		len++;
	}
	*str_split = (char*)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (len < count_word)
	{
		i = 0;
		while (str[i] != 9 || str[i] != 32 || str[i] != '\n' || str[i] != '\0')
		{
			str_tmp[i] = &str[i];
			i++;
		}
		str_split[len] = *str_tmp;
		len++;
	}
	return (str_split);
}

int main(void)
{
	
	char	*str;
	char	**str2;
	int i;

	i =0;
	str = "This is a test string";
	str2 = ft_split_whitespaces(str);
	while(str2[i])
	{
		printf("%s\n", str2[i]);
		i++;
	}
	return 0;
}