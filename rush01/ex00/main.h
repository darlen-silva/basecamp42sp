/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupaulo- <lupaulo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:50:26 by lupaulo-          #+#    #+#             */
/*   Updated: 2022/04/18 01:22:49 by lupaulo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

void	wipe(int possibilities[4][4][4]);
void	find3(int possibilities[4][4][4], int matrix[4][4]);
void	forever_alone(int possibilities[4][4][4], int matrix[4][4]);
void	remove_3_line(int possibilities[4][4][4], int matrix[4][4], int line);
void	remove_3_col(int possibilities[4][4][4], int matrix[4][4], int col);
void	find1234(int possibilities[4][4][4], int matrix[4][4]);
void	find2(int possibilities[4][4][4]);
void	find_two_right(int possibilities[4][4][4], int matrix[4][4]);
void	find_two_left(int possibilities[4][4][4], int matrix[4][4]);
void	find_two_up(int possibilities[4][4][4], int matrix[4][4]);
void	find_two_down(int possibilities[4][4][4], int matrix[4][4]);
void	print_out(int possibilities[4][4][4]);
int		check(int possibilities[4][4][4]);

#endif