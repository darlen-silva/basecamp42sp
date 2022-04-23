/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:38:52 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:46:50 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Converts everything to lowercase
int	ft_str_is_uppercase(char *str)
{
	int	is_upper;
	int	i;

	is_upper = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			is_upper = 1;
		i++;
	}
	return (is_upper);
}

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_str_is_uppercase(&c))
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char a[] = "sjas4343";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%s", ft_strlowcase(a));
}