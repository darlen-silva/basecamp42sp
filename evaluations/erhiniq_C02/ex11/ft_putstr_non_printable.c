/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 04:57:00 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:52:38 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_hexa(char c)
{
	unsigned int	temp;

	temp = c / 16 + 48;
	ft_putchar('\\');
	ft_putchar(temp);
	if (c % 16 < 10)
		temp = (c % 16) + 48;
	else
		temp = (c % 16) + 87;
	ft_putchar(temp);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 32) && str[i] >= 0) || str[i] == 127)
			ft_write_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

#include <stdio.h>

int main(void)
{
	char a[] = "oii \n";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	ft_putstr_non_printable(a);
}