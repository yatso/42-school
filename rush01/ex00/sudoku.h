/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:50:32 by mhurd             #+#    #+#             */
/*   Updated: 2016/07/23 13:52:05 by mhurd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>
# define VALID 1
# define INVALID 0

void	error(void);
void	ft_putchar(char c);
int		print_solution(int **arr);
int		**parse_lines(char **lines);
int		test_new_board(int **ar, int finished);
void	backtrack(int **arr, int y_pos, int x_pos);
int		count_solutions(int **arr, int y_pos, int x_pos);
int		test_new_number(int **ar, int y_pos, int x_pos);
#endif
