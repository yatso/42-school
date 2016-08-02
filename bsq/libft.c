/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 10:38:41 by yso               #+#    #+#             */
/*   Updated: 2016/08/01 10:38:43 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str++;
		cpt++;
	}
	return (cpt);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
