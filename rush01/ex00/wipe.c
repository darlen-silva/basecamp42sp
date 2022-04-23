/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:53:48 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 00:55:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear(int possibilities[4][4][4], int col, int row, int value)
{
	int	c;
	int	r;

	c = 0;
	r = 0;
	while (c < 4)
	{
		while (r < 4)
		{
			if (c == col || r == row)
			{
				possibilities[c][r][value -1] = 0;
				if ((c == col && r == row))
					possibilities[c][r][value -1] = value;
			}
			r++;
		}
		r = 0;
		c++;
	}
}

void	wipe(int possibilities[4][4][4])
{
	int	col;
	int	row;
	int	pos_index;
	int	counter_zeros;
	int	one_possibilitie;

	col = 0;
	row = 0;
	pos_index = 0;
	counter_zeros = 0;
	one_possibilitie = 4;
	while (col < 4)
	{
		while (row < 4)
		{
			while (pos_index < 4)
			{
				if (possibilities[col][row][pos_index] == 0)
					counter_zeros ++;
				else
					one_possibilitie = possibilities[col][row][pos_index];
				if (counter_zeros == 3)
				{
					clear(possibilities, col, row, one_possibilitie);
					counter_zeros = 0;
				}
				pos_index++;
			}
			counter_zeros = 0;
			one_possibilitie = 4;
			pos_index = 0;
			row++;
		}
		row = 0;
		col++;
	}
}
