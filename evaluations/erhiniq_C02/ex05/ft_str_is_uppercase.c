/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:37:29 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:42:32 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Return 1 if the string passed as a parameter contains only
	uppercase alphabetic characters and return 0 if the function
	contains other types of characters. */
int	ft_str_is_uppercase(char *str)
{
	int	is_upper;
	int	i;

	is_upper = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			is_upper = 0;
		i++;
	}
	return (is_upper);
}

#include <stdio.h>

int main(void)
{
	char a[] = "";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%d", ft_str_is_uppercase(a));
}