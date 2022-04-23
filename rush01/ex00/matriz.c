#include <stdio.h>

void	fill_matrix(int matrix[4][4], int *numbers)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	while(i < 4)
	{
		while(j < 4)
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
	while(i < 4)
	{
		while(j < 4)
		{
			while(k < 4)
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

int	main(int argc, char **argv)
{
	int	matrix[4][4] = {{3, 1, 3, 2}, {1, 3, 2, 3}, {2, 3, 2, 1}, {2, 1, 2, 3}};
	int possibilities[4][4][4];

	fill_possibilities(possibilities);

	//mostrar matriz
	printf("\nMatriz 3D: \n");
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
	printf("\n\nObservadores:\n");
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return (0);
}