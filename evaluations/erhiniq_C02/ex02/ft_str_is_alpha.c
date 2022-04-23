/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:32:05 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:39:02 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Return 1 if the string passed as a parameter contains only
	alphabetic characters and return 0 if the function contains other types
	of characters. */
int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	i;

	is_alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' && str[i] > 'Z') || str[i] < 'A' || str[i] > 'z')
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}
#include <stdio.h>

int main(void)
{
	char a[] = "";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%d", ft_str_is_alpha(a));
}