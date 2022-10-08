#include <stdio.h>

void 	ft_printnbr(int nbr)
{
	while (nbr / 10)
		ft_printnbr(nbr / 10);
	printf("%d", nbr);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (tab[i] < length)
	{
		f(tab[i]);
		i++;
	}
}

int main(void)
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_foreach(a, 6, &ft_printnbr);
}
