/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 23:02:44 by yso               #+#    #+#             */
/*   Updated: 2016/07/17 14:46:23 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush01(int x, int y);

int	main(void)
{
	rush01(5, 3);
	rush01(5, 1);
	rush01(1, 1);
	rush01(1, 5);
	rush01(4, 4);
	rush01(0, 0);
	rush01(-2, -45);
	rush01(-2, 23);
	rush01(23, -1);
	rush01(4, 0);
}
