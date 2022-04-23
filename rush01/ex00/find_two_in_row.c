/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_two_in_row.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:32:06 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 02:21:36 by dardo-na         ###   ########.fr       */
=======
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:32:06 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 00:52:49 by dbrandao         ###   ########.fr       */
>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
/*                                                                            */
/* ************************************************************************** */

void	two_one_killer_row(int possibilities[4][4][4], int p3, int p4, int col, int side)
{
	int	item;
	int	line_1;
	int	line_2;

	if (side == 3)
	{
		line_1 = 3;
		line_2 = 2;
	}
	else
	{
		line_1 = 0;
		line_2 = 1;
	}
	item = 0;
	if (p3 == 3 && p4 == 4)
	{
		while (item < 4)
		{
			if (possibilities[line_1][col][item] != 2)
			{
				possibilities[line_1][col][item] = 0;
			}
			if (possibilities[line_2][col][item] != 1)
			{
				possibilities[line_2][col][item] = 0;
			}
			item++;
		}
	}
	item = 0;
	if (p3 == 4 && p4 == 3)
	{
		while (item < 4)
		{
			if (possibilities[line_1][col][item] != 1)
			{
				possibilities[line_1][col][item] = 0;
			}
			if (possibilities[line_2][col][item] != 2)
			{
				possibilities[line_2][col][item] = 0;
			}
			item++;
		}
	}
}


void	find_two_up(int possibilities[4][4][4], int matrix[4][4])
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
		if (matrix[1][i] == 3)
		{
			while (item < 4)
			{
				if (possibilities[0][i][item] == 3)
				{
					is_three++;
					p4 = 3;
				}
				if (possibilities[0][i][item] == 4)
				{
					is_four++;
					p4 = 4;
				}
				if (possibilities[1][i][item] == 4)
				{
					is_four++;
					p3 = 4;
				}
				if (possibilities[1][0][item] == 3)
				{
					is_three++;
					p3 = 3;
				}
				item++;
			}
			item = 0;
			if (is_three == 1 && is_four == 1)
			{
				while (item < 4)
				{
					if (possibilities[3][i][item] == 1)
						one_and_two++;
					if (possibilities[3][i][item] == 2)
						one_and_two++;
					if (possibilities[2][i][item] == 1)
						one_and_two++;
					if (possibilities[2][i][item] == 2)
						one_and_two++;
					item++;
				}
				if (one_and_two == 4 && matrix[1][i] != 3)
				{
					two_one_killer_row(possibilities, p3, p4, i, 3);
				}
			}	
		}
<<<<<<< HEAD
=======
		

>>>>>>> ef556f533ee17381ac43d5fdddc02602a3551d52
		i++;
		item = 0;
		is_four = 0;
		is_three = 0;
		one_and_two = 0;
	}
}

void	find_two_down(int possibilities[4][4][4], int matrix[4][4])
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
		if(matrix[0][i] == 3)
		{
			while (item < 4)
			{
				if(possibilities[3][i][item] == 3)
				{
					is_three++;
					p4 = 3;
				}
				if(possibilities[3][i][item] == 4)
				{
					is_four++;
					p4 = 4;
				}
				if(possibilities[2][i][item] == 4)
				{
					is_four++;
					p3 = 4;
				}
				if(possibilities[2][i][item] == 3)
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
					if(possibilities[0][i][item] == 1)
						one_and_two++;
					if(possibilities[0][i][item] == 2)//3 = se p3 == 3 && p4 == 4 entao p1 == 2 && p2 == 1
						one_and_two++;
					if(possibilities[0][i][item] == 1)//3 = se p3 == 4 && p4 == 3 entao p1 == 1 && p2 == 2
						one_and_two++;
					if(possibilities[0][i][item] == 2)
						one_and_two++;
					item++;
				}
				if(one_and_two == 4 && matrix[0][i] != 3)
				{
					two_one_killer_row(possibilities, p3, p4, i, 0);
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
