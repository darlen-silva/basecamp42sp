<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:53:48 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:53:33 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52

#include <stdio.h>

void	put_out(int one_possibilitie, int col)
{
	printf("%d", one_possibilitie);
	if(col == 3)
	{
		printf("\n");
	}
}

void	print_out(int possibilities[4][4][4])
{
	int row;
	int col;
	int	pos_index;
	int	counter_zeros;
	int	one_possibilitie;

	row = 0;
	col = 0;
	pos_index = 0;
	counter_zeros = 0;
	one_possibilitie = 4;
	while (row < 4)
	{
		while (col < 4)
		{
			while (pos_index < 4)
			{
				if (possibilities[row][col][pos_index] == 0)
				{
					counter_zeros ++;
				}
				else
				{
					one_possibilitie = possibilities[row][col][pos_index];
				}
				if (counter_zeros == 3)
				{
					put_out(one_possibilitie, col);
					counter_zeros = 0;
				}
				pos_index ++;
			}
			counter_zeros = 0;
			one_possibilitie = 4;
			pos_index = 0;
			col++;
		}
		col = 0;
	row++;
	}
}
