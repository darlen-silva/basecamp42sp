/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:02:43 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 23:45:21 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = -1;
	while (++num1 <= 7)
	{
		num2 = num1;
		while (++num2 <= 8)
		{
			num3 = num2;
			while (++num3 <= 9)
			{
				ft_putchar(num1 + '0', num2 + '0', num3 + '0');
				if (num1 != 7)
					write(1, ", ", 2);
			}
		}
	}
}
