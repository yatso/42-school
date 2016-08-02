/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:50:48 by yso               #+#    #+#             */
/*   Updated: 2016/07/21 18:50:50 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	hour_print(int hour)
{
	char	*ampm;

	if ((hour <= 12) || (hour == 24))
	{
		ampm = ".00 A.M.";
	}
	else
	{
		ampm = ".00 P.M.";
	}
	if (hour % 12 != 0)
	{
		printf("%d", hour % 12);
	}
	else
	{
		printf("%d", 12);
	}
	printf("%s", ampm);
}

void	ft_takes_place(int hour)
{
	if ((hour > 24) || (hour < 0))
	{
		return ;
	}
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	hour_print(hour);
	printf("%s", " AND ");
	hour_print(hour + 1);
	printf("%c", '\n');
}
