/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 10:36:57 by yso               #+#    #+#             */
/*   Updated: 2016/08/01 10:37:07 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_H
# define	FT_H

# define	BUF_SIZE 20

int		ft_strlen(char *str);
void	ft_putstr(char *str);
// char	*strdup(char *str);
char	*ft_mallocat(char *str, char *buf);
int		ft_size_n(char *str);

#endif
