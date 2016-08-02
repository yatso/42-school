/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 13:48:41 by yso               #+#    #+#             */
/*   Updated: 2016/07/28 13:48:44 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	disp_file(int fd)
{
	char	content;

	while (read(fd, &content, 1) != 0)
		write(1, &content, 1);
}

int		main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		disp_file(fd);
		close(fd);
		return (0);
	}
	return (0);
}
