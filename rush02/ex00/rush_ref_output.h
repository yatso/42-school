/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_ref_output.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:07:36 by cyildiri          #+#    #+#             */
/*   Updated: 2016/07/31 18:12:50 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_REF_OUTPUT_H
# define RUSH_REF_OUTPUT_H
# define BUFSIZE 1
# define INTBOUND 2147483647

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		find_width(char *str);
int		find_height(char *str);
void	ft_what_rush(char *str, int x, int y);
void	ft_rush_name(int k, int x, int y);
int		ft_strcmp(char *str1, char *str2);
char	*ft_rush00(int x, int y);
char	*rush00_store_first_line(int x, int i, char *str);
char	*rush00_store_middle_line(int x, int i, char *str);
char	*rush00_store_last_line(int x, int i, char *str);
char	*ft_rush01(int x, int y);
char	*rush01_store_first_line(int x, int i, char *str);
char	*rush01_store_middle_line(int x, int i, char *str);
char	*rush01_store_last_line(int x, int i, char *str);
char	*ft_rush02(int x, int y);
char	*rush02_store_first_line(int x, int i, char *str);
char	*rush02_store_middle_line(int x, int i, char *str);
char	*rush02_store_last_line(int x, int i, char *str);
char	*ft_rush03(int x, int y);
char	*rush03_store_first_line(int x, int i, char *str);
char	*rush03_store_middle_line(int x, int i, char *str);
char	*rush03_store_last_line(int x, int i, char *str);
char	*ft_rush04(int x, int y);
char	*rush04_store_first_line(int x, int i, char *str);
char	*rush04_store_middle_line(int x, int i, char *str);
char	*rush04_store_last_line(int x, int i, char *str);

#endif
