/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find1234.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:13:06 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:46:02 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear_row(int possibilities[4][4][4], int row)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			possibilities[row][i][j] = 0;
			j++;
		}
		j = 0;
	i++;
	}
}

void	clear_col(int possibilities[4][4][4], int col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			possibilities[i][col][j] = 0;
			j++;
		}
		j = 0;
	i++;
	}
}

void	set1234(int possibilities[4][4][4], int row, int col, int side)
{
	int	index;
	int	decrement;

	index = 0;
	if (side == 0)
	{
		while (index < 4)
		{
			possibilities[index][col][index] = index + 1;
			index++;
		}
	}
	else if (side == 1)
	{
		decrement = 4;
		while (index < 4)
		{
			possibilities[index][col][decrement -1] = decrement;
			index++;
			decrement--;
		}
	}
	else if (side == 2)
	{
		while (index < 4)
		{
			possibilities[row][index][index] = index + 1;
			index++;
		}
	}
	else if (side == 3)
	{
		decrement = 4;
		while (index < 4)
		{	
			possibilities[row][index][decrement -1] = decrement;
			index++;
			decrement--;
		}
	}
}

void	find1234(int possibilities[4][4][4], int matrix[4][4])
{
	int	side;
	int	index;

	side = 0;
	index = 0;
	while (side < 4)
	{
		while (index < 4)
		{
			if (matrix[side][index] == 4 && side == 0)
			{
				clear_col(possibilities, index);
				set1234(possibilities, 0, index, side);
			}
			else if (matrix[side][index] == 4 && side == 1)
			{
				clear_col(possibilities, index);
				set1234(possibilities, 3, index, side);
			}
			else if (matrix[side][index] == 4 && side == 2)
			{
				clear_row(possibilities, index);
				set1234(possibilities, index, 0, side);
			}
			else if (matrix[side][index] == 4 && side == 3)
			{	
				clear_row(possibilities, index);
				set1234(possibilities, index, 3, side);
			}	
			index++;
		}
		index = 0;
		side++;
	}	
}
