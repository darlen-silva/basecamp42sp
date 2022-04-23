/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:03:51 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/18 23:53:01 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print(num1 / 10 + '0');
			print(num1 % 10 + '0');
			print(' ');
			print(num2 / 10 + '0');
			print(num2 % 10 + '0');
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

int main(void)
{
	ft_print_comb2();
}
