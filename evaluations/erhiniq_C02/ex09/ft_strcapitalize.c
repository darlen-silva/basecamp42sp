/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:49:55 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:48:18 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Capitalizes first word of every word
char	ft_checknext(char c, char d)
{
	if (c >= 'a' && c <= 'z')
		d += 32;
	else if (c >= '0' && c <= '9')
		d += 32;
	else if (c >= 'A' && c <= 'Z')
		d += 32;
	return (d);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A'))
				str[i] -= 32;
			else if ((str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
				str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = ft_checknext(str[i - 1], str[i]);
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char a[] = "oi, tudo bem? 42palavras ~quarenta-e-duas; cinquenta+e+um";
	//char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%s", ft_strcapitalize(a));
}