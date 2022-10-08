/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:59:50 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/30 21:00:07 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str, int n)
{
	write(1, str, n);
	if (str[0] <= '9' - n)
		write(1, ", ", 2);
	return (0);
}

void	ft_print_combn(int n)
{
	char	nbr[9];
	int		cursor;
	int		start_over;

	nbr[0] = '0';
	cursor = 0;
	while (cursor >= 0)
	{
		start_over = 1;
		while (cursor < n && nbr[cursor] <= '9' - (n - cursor) + 1)
		{
			if (cursor < n - 1)
				cursor++;
			else if (cursor == n - 1)
				start_over = ft_putstr(nbr, n);
			if (start_over)
				nbr[cursor] = nbr[cursor - 1] + 1;
			else
				nbr[cursor] = nbr[cursor] + 1;
		}
		--cursor;
		nbr[cursor]++;
	}
}
