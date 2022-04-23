/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forever_alone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:08:24 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:27:53 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	run_line(int possibilities[4][4][4], int alone[4], int i, int j)
=======
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:08:24 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 01:17:32 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	run_line(int possibilities[4][4][4], int alone[4], int i, int j)
{
	int	col_begin;
	int	item;
	int	verify;
	int	only_one;

	col_begin = 0;
	item = 0;
	verify = 0;
	while (col_begin < 4)
	{
		while (item < 4)
		{
			if (col_begin != j)
			{
				if (possibilities[i][col_begin][item] == alone[item])
					alone[item] = 0;
			}
			item++;
		}
		item = 0;
		col_begin++;
	}
	item = 0;
	while (item < 4)
	{
		if (alone[item] == 0)
			verify++;
		else
			only_one = alone[item];
		item++;
	}
	item = 0;
	if (verify == 3)
	{
		while (item < 4)
		{
			if (possibilities[i][j][item] != only_one)
				possibilities[i][j][item] = 0;
			item++;
		}
	}
}

void	run_col(int possibilities[4][4][4], int alone[4], int i, int j)
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
{
	int	line_begin;
	int	item;
	int	verify;
	int	only_one;

	line_begin = 0;
	item = 0;
	verify = 0;
	while (line_begin < 4)
	{
		while (item < 4)
		{
			if (line_begin != i)
			{
				if (possibilities[line_begin][j][item] == alone[item])
					alone[item] = 0;
			}
			item++;
		}
		item = 0;
		line_begin++;
	}
	item = 0;
	while (item < 4)
	{
		if (alone[item] == 0)
			verify++;
		else
			only_one = alone[item];
		item++;
	}
	item = 0;
	if (verify == 3)
	{
		while (item < 4)
		{
			if (possibilities[i][j][item] != only_one)
				possibilities[i][j][item] = 0;
			item++;
		}
	}
}

void	forever_alone(int possibilities[4][4][4], int matrix[4][4])
{
	int	i;
	int	j;
	int	item;
	int	alone[4];

	i = 0;
	j = 0;
	item = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			while (item < 4)
			{
				alone[item] = possibilities[i][j][item];
				item++;
			}
			run_line(possibilities, alone, i, j);
			run_col(possibilities, alone, i, j);
			j++;
			item = 0;
		}
		i++;
		j = 0;
	}
}

/*
	pega is 4 itens da posição de partida
	verifica com cada posição da linha se tem igual
	se tiver entao anula os iguais
	caso sobre somente um item sem ser anulado
	ai basta zerar da posição de partida todos
	deixando somente o item nao anulado
<<<<<<< HEAD
*/
=======
*/
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
