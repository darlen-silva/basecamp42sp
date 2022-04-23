/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:28:41 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:45:05 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Converts everything to uppercase
int	ft_str_is_lowercase(char *str)
{
	int	is_low;
	int	i;

	is_low = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			is_low = 1;
		i++;
	}
	return (is_low);
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_str_is_lowercase(&c) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char a[] = "";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%s", ft_strupcase(a));
}