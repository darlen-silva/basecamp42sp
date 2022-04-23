/*
	verificar se há mais de 4 casas com 2 ooções;
	se sim, então colocar um numero dentro e chamar as funções novamente
	repetir

*/
#include <stdio.h>

void	forever_alone(int possibilities[4][4][4], int matrix[4][4]);
void	wipe(int possibilities[4][4][4]);



int		more_than_two(int possibilities[4][4][4])
{
	int	i;
	int	j;
	int	item;
	int	count;
	int	more_than_two;

	i = 0;
	j = 0;
	item = 0;
	count = 0;
	more_than_two = 0;
	while(i < 4)
	{
		while(j < 4)
		{
			while(item < 4)
			{
				if(possibilities[i][j][item] != 0)
				{
					count++;
				}
				item++;
			}
			if(count >= 2)
				more_than_two++;
			count = 0;
			item = 0;
			j++;
		}
		j = 0;
		i++;
	}
	printf("%d\n", more_than_two);
	return (more_than_two);
}

void	put_number(int possibilities[4][4][4], int row, int number)
{
	int	i;
	int	j;
	int	item;
	int	count;

	i = 0;
	j = 0;
	item = 0;
	count = 0;
	while(j < 4)
	{
		while(item < 4)
		{
			if(possibilities[row][j][item] != 0)
			{
				count++;
			}
			item++;
		}
		if(count >= 2)
		{
			item = 0;
			while(possibilities[row][j][item] != number)
			{
				possibilities[row][j][item] = 0;
				item++;
			}
		}
		count = 0;
		item = 0;
		j++;
	}
}

void	try_luck(int possibilities[4][4][4], int matrix[4][4])
{
	if(more_than_two(possibilities))
	{
		put_number(possibilities, 0, 1);
		wipe(possibilities);
		forever_alone(possibilities, matrix);
	}
	if(more_than_two(possibilities))
	{
		put_number(possibilities, 1, 2);
		wipe(possibilities);
		forever_alone(possibilities, matrix);
	}
	if(more_than_two(possibilities))
	{
		put_number(possibilities, 0, 1);
		wipe(possibilities);
		forever_alone(possibilities, matrix);
	}
}