/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 10:39:53 by yso               #+#    #+#             */
/*   Updated: 2016/08/01 10:39:55 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	int ret;
	char *buf;
	char *str;

	buf = (char*)malloc(sizeof(char) * 1000);
	if (buf == NULL)
		return (0);
	str = (char*)malloc(sizeof(char) * 1000);
	if (str == NULL)
		return (0);
	str[0] = '\0';
	while ((ret = read(0, buf, 10)))
	{
		buf[ret] = '\0';
		str = ft_mallocat(str, buf);
		buf = (char*)malloc(sizeof((*buf) * 1000));
	}
	return (0);
}
