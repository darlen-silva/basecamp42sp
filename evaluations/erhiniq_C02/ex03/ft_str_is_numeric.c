/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:34:01 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:40:19 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Return 1 if the string passed as a parameter contains only
	numbers and return 0 if the function contains other types of characters.*/
int	ft_str_is_numeric(char *str)
{
	int	is_num;
	int	i;

	is_num = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			is_num = 0;
		i++;
	}
	return (is_num);
}

#include <stdio.h>

int main(void)
{
	char a[] = "4123 ";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%d", ft_str_is_numeric(a));
}