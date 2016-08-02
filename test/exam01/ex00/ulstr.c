/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 09:37:35 by yso               #+#    #+#             */
/*   Updated: 2016/07/22 09:37:41 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swapcases(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 1;
	while (argv[i] != '\0')
	{
		swapcases(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
