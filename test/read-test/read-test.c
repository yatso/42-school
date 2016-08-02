/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read-test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 22:44:16 by yso               #+#    #+#             */
/*   Updated: 2016/08/01 22:44:18 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char const *argv[])
{
	char buf[10];
	int ret;

	while(1)
	{
		ret = read(0, buf, 10);
		if (ret < 10)
		{
			buf[ret] = '\0';
			printf("%s\n", buf);
			break ;
		} else
			printf("%s\n", buf);
	}

	return (0);
}
