/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_two_in_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:50:30 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:16:01 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:50:30 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 03:01:57 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
//find 2
3 = se p3 == 3 && p4 == 4 entao p1 == 2 && p2 == 1
3 = se p3 == 4 && p4 == 3 entao p1 == 1 && p2 == 2

laterais:
verificar duas colunas ao mesmo tempo passando linha por linha
se encontrar 3 e 4 juntos verificar se o observador é 3
se for 3 entao preencher p1 e p2 baseado na regra
*/



>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
void	two_one_killer(int possibilities[4][4][4], int p3, int p4, int line, int side)
{
	int	item;
	int	col_1;
	int	col_2;

	if (side == 3)
	{
		col_1 = 3;
		col_2 = 2;
	}
	else
	{
		col_1 = 0;
		col_2 = 1;
	}
	item = 0;
	if (p3 == 3 && p4 == 4)
	{
		while (item < 4)
		{
			if (possibilities[line][col_1][item] != 2)
				possibilities[line][col_1][item] = 0;
			if (possibilities[line][col_2][item] != 1)
				possibilities[line][col_2][item] = 0;
			item++;
		}
	}
	item = 0;
	if (p3 == 4 && p4 == 3)
	{
		while (item < 4)
		{
			if (possibilities[line][col_1][item] != 1)
				possibilities[line][col_1][item] = 0;
			if (possibilities[line][col_2][item] != 2)
				possibilities[line][col_2][item] = 0;
			item++;
		}
	}
}

void	find_two_right(int possibilities[4][4][4], int matrix[4][4])
{
	int	i;
	int	one_and_two;
	int	item;
	int	is_three;
	int	is_four;
	int	p3;
	int	p4;

	i = 0;
	item = 0;
	is_four = 0;
	is_three = 0;
	one_and_two = 0;
	while (i < 4)
	{
		if(matrix[3][i] == 3)
		{
			while (item < 4)
			{
				if(possibilities[i][0][item] == 3)
				{
					is_three++;
					p4 = 3;
				}
				if(possibilities[i][0][item] == 4)
				{
					is_four++;
					p4 = 4;
				}
				if(possibilities[i][1][item] == 4)
				{
					is_four++;
					p3 = 4;
				}
				if(possibilities[i][1][item] == 3)
				{
					is_three++;
					p3 = 3;
				}
				item++;
			}
			item = 0;
			if(is_three == 1 && is_four == 1)
			{
				while(item < 4)
				{
					if(possibilities[i][3][item] == 1)
						one_and_two++;
					if(possibilities[i][3][item] == 2)//3 = se p3 == 3 && p4 == 4 entao p1 == 2 && p2 == 1
						one_and_two++;
					if(possibilities[i][2][item] == 1)//3 = se p3 == 4 && p4 == 3 entao p1 == 1 && p2 == 2
						one_and_two++;
					if(possibilities[i][2][item] == 2)
						one_and_two++;
					item++;
				}
				if(one_and_two == 4 && matrix[3][i] != 3)
				{
					two_one_killer(possibilities, p3, p4, i, 3);
				}
			}
		}
		i++;
		item = 0;
		is_four = 0;
		is_three = 0;
		one_and_two = 0;
	}
}

void	find_two_left(int possibilities[4][4][4], int matrix[4][4])
{
	int	i;
	int	one_and_two;
	int	item;
	int	is_three;
	int	is_four;
	int	p3;
	int	p4;

	i = 0;
	item = 0;
	is_four = 0;
	is_three = 0;
	one_and_two = 0;
	while (i < 4)
	{
		if(matrix[2][i] == 3)
		{
			while (item < 4)
			{
				if(possibilities[i][3][item] == 3)
				{
					is_three++;
					p4 = 3;
				}
				if(possibilities[i][3][item] == 4)
				{
					is_four++;
					p4 = 4;
				}
				if(possibilities[i][2][item] == 4)
				{
					is_four++;
					p3 = 4;
				}
				if(possibilities[i][2][item] == 3)
				{
					is_three++;
					p3 = 3;
				}
				item++;
			}
			item = 0;
			if(is_three == 1 && is_four == 1)
			{
				while(item < 4)
				{
					if(possibilities[i][0][item] == 1)
						one_and_two++;
					if(possibilities[i][0][item] == 2)//3 = se p3 == 3 && p4 == 4 entao p1 == 2 && p2 == 1
						one_and_two++;
					if(possibilities[i][1][item] == 1)//3 = se p3 == 4 && p4 == 3 entao p1 == 1 && p2 == 2
						one_and_two++;
					if(possibilities[i][1][item] == 2)
						one_and_two++;
					item++;
				}
				if(one_and_two == 4 && matrix[2][i] != 3)
				{
					two_one_killer(possibilities, p3, p4, i, 0);
				}
			}
		}

		i++;
		item = 0;
		is_four = 0;
		is_three = 0;
		one_and_two = 0;
	}
}
