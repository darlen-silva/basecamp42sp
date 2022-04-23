/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:06:41 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:47:02 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	remove_3_line(int possibilities[4][4][4], int matrix[4][4], int line)
{
	int	j;
	int	item;
	int	h;

	j = 0;
	item = 0;
	h = 0;
	if (line == 3)
	{
		h = 1;
	}
	while (j < 4)
	{
		if (matrix[h][j] == 3)
		{
			possibilities[line][j][2] = 0;
		}
		j++;
	}
}

void	remove_3_col(int possibilities[4][4][4], int matrix[4][4], int col)
{
	int	j;
	int	item;
	int	i;
	int	line;

	j = 0;
	i = 0;
	item = 0;
	line = 2;
	if (col == 3)
	{
		line = 3;
	}
	while (i < 4)
	{
		if (matrix[line][j] == 3)
		{
			possibilities[i][col][2] = 0;
		}
		j++;
		i++;
	}
}
