/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:22:42 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:33:42 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set3(int possibilities[4][4][4], int row, int col)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (index != 2)
			possibilities[row][col][index] = 0;
		else
			possibilities[row][col][index] = 3;
		index++;
	}
}

void	find3(int possibilities[4][4][4], int matrix[4][4])
{
	int	side;
	int	index;

	side = 0;
	index = 0;
	while (side < 4)
	{
		while (index < 4)
		{
			if (matrix[side][index] == 2 && side == 0)
			{
				if (matrix[side + 1][index] == 1)
					set3(possibilities, 0, index);
			}
			else if (matrix[side][index] == 2 && side == 1)
			{
				if (matrix[side - 1][index] == 1)
					set3(possibilities, 3, index);
			}
			else if (matrix[side][index] == 2 && side == 2)
			{
				if (matrix[side + 1][index] == 1)
					set3(possibilities, index, 0);
			}
			else if (matrix[side][index] == 2 && side == 3)
			{
				if (matrix[side - 1][index] == 1)
					set3(possibilities, index, 3);
			}
		}
		index = 0;
		side++;
	}
}
