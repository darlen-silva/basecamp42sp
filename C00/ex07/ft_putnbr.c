/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:27:40 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/15 15:41:28 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		count;

	count = 0;
	if (nb == 0)
		print('0');
	if (nb < 0)
	{
		nb = nb * -1;
		print('-');
	}
	if (nb == -2147483648)
		write(1, "2147483648", 10);
	while (nb > 0)
	{
		arr[count] = (nb % 10) + '0';
		nb = nb / 10;
		count++;
	}
	while (--count >= 0)
		print(arr[count]);
}
