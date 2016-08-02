/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 10:40:15 by yso               #+#    #+#             */
/*   Updated: 2016/08/01 10:40:17 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

#include <stdio.h>
char	*ft_mallocat(char *str, char *buf)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = 0;
	tmp = (char *)malloc(sizeof(char) * 1000);
	if (tmp == NULL)
		return (0);
	while (str[++i])
		tmp[j++] = str[i];
	i = -1;
	while (buf[++i])
		tmp[j++] = buf[i];
	tmp[j] = '\0';
	free(str);
	free(buf);
	return (tmp);
}