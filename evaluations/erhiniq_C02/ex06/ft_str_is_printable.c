/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:38:30 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:43:31 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Return 1 if the string passed as a parameter contains only
//	printable characters and return 0 if the function contains other
//	types of characters. */
int	ft_str_is_printable(char *str)
{
	int	is_print;
	int	i;

	is_print = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
			is_print = 0;
		i++;
	}
	return (is_print);
}

#include <stdio.h>

int main(void)
{
	char a[] = "\n";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%d", ft_str_is_printable(a));
}