/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:07:58 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/23 06:27:34 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		count;

	count = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
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
		ft_putchar(arr[count]);
}
int main(void)
{
	ft_putnbr(-21474836);
}