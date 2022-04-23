<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:53:48 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:31:51 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52

int	check(int possibilities[4][4][4])
{
	int	row;
	int	col;
	int	pos_index;
	int	sum_row;

	row = 0;
	col = 0;
	pos_index = 0;
	sum_row = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			while (pos_index < 4)
			{
				sum_row = sum_row + possibilities[row][col][pos_index];
				pos_index ++;
			}
			pos_index = 0;
			col++;
		}
		if (sum_row != 10)
		{
			return (1);
		}
		sum_row = 0;
		col = 0;
		row++;
	}
	return (0);
}
