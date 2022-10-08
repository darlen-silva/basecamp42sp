#include <unistd.h>
#include <stdio.h>

void fill_board(int board[10][10])
{
	int x;
	int y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			write(1, &board[x][y], 1);
			write(1, " \n", 2);
			y++;
		}
		printf("\n");
		x++;
	}
}


void	ft_ten_queens_puzzle(void)
{
	int	bourd[10][10];
	int	x;
	int	c;

	x = 0;
	while (x < 10)
	{
		c = 0;
		while (c < 10)
		{
			bourd[x][c] = c + 48;
			c++;
		}
		x++;
	}
	fill_board(bourd);
}

int main(void)
{
	ft_ten_queens_puzzle();
}
