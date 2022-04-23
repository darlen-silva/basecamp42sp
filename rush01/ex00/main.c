/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:56:06 by lupaulo-          #+#    #+#             */
/*   Updated: 2022/04/18 02:48:42 by dardo-na         ###   ########.fr       */
=======
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:55:42 by lupaulo-          #+#    #+#             */
/*   Updated: 2022/04/18 02:43:07 by dbrandao         ###   ########.fr       */
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
int		check(int possibilities[4][4][4]);
void	print_out(int possibilities[4][4][4]);
void	try_luck(int possibilities[4][4][4], int matrix[4][4]);

void	str_to_int(char *str, int *numbers)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			numbers[z] = str[i] - 48;
			z++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	fill_matrix(int matrix[4][4], int *numbers)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			matrix[i][j] = numbers[z];
			j++;
			z++;
		}
		j = 0;
		i++;
	}
}

void	fill_possibilities(int possibilities[4][4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			while (k < 4)
			{
				possibilities[i][j][k] = k + 1;
				k++;
			}
			k = 0;
			j++;
		}
		k = 0;
		j = 0;
		i++;
	}
}

void	find4cols(int possibilities[4][4][4], int matrix[4][4], int line)
{
	int	j;
	int	item;
<<<<<<< HEAD
	int	h;

=======
	int h;
	// x x x x
	// c c c c
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
	j = 0;
	item = 0;
	h = 0;
	if (line == 3)
	{
		h = 1;
	}
	while (j < 4)
	{
		if (matrix[h][j] == 1)
		{
			while (possibilities[line][j][item] != 4)
			{
				possibilities[line][j][item] = 0;
				item++;
			}
			item = 0;
		}
		j++;
	}
}

void	find4lines(int possibilities[4][4][4], int matrix[4][4], int col)
{
	int	j;
	int	item;
	int h;
	int	line;
	// x x x x
	// c c c c
	j = 0;
	item = 0;
	h = 2;
	line = 0;
	if (col == 3)
	{
		h = 3;
	}
	while (j < 4)
	{
		if (matrix[h][j] == 1)
		{
			while (possibilities[line][col][item] != 4)
			{
				possibilities[line][col][item] = 0;
				item++;
			}
			item = 0;
		}
		j++;
		line++;
	}
}

<<<<<<< HEAD
=======
void	test1(int possibilities[4][4][4], int matrix[4][4])
{
	int i = 3;
	int oi = 1;
	int z = 0;
		while(oi < 4)
		{
			while(z < 4)
			{
				printf("%d", possibilities[i][oi][z]);
				z++;
			}
			oi++;
		}
}


>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
int	main(int argc, char **argv)
{
	int	numbers[16];
	int	matrix[4][4];
	int possibilities[4][4][4];

	if (argc != 2)
		return (0);
	fill_possibilities(possibilities);
	str_to_int(argv[1], numbers);
	fill_matrix(matrix, numbers);
	find4lines(possibilities, matrix, 0);
	find4lines(possibilities, matrix, 3);
	find4cols(possibilities, matrix, 3);
	find4cols(possibilities, matrix, 0);
	remove_3_line(possibilities, matrix, 0);
	remove_3_line(possibilities, matrix, 3);
	remove_3_col(possibilities, matrix, 0);
	remove_3_col(possibilities, matrix, 3);
	wipe(possibilities);
	find1234(possibilities, matrix);
	wipe(possibilities);
	find3(possibilities, matrix);
	wipe(possibilities);
	forever_alone(possibilities, matrix);
	wipe(possibilities);
	find_two_right(possibilities, matrix);
	find_two_left(possibilities, matrix);
	find_two_up(possibilities, matrix);
	find_two_down(possibilities, matrix);
	wipe(possibilities);
	forever_alone(possibilities, matrix);
<<<<<<< HEAD
	if (check(possibilities) == 0)
		print_out(possibilities);
	else
		write(1, "Erro\n", 5);
=======
	wipe(possibilities);
	forever_alone(possibilities, matrix);
	//try_luck(possibilities, matrix);
	//try_luck(possibilities, matrix);
	if(check(possibilities) == 0)
	{
		print_out(possibilities);
	}
	else{
		printf("Erro\n");
	}
	

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			for(int k = 0; k < 4; k++)
			{
				printf("%d ", possibilities[i][j][k]);
			}
			printf("\t");
		}
		printf("\n");
	}
	
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
	return (0);
}
