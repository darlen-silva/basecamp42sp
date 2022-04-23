/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:07:08 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:36:45 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Replicates strcpy
char	*ft_strcpy(char	*dest, char	*src)
{
	char	temp;
	int		i;

	i = 0;
	temp = src[i];
	while (temp != '\0')
	{
		temp = src[i];
		dest[i] = temp;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char a[] = "d";
	char b[] = "";
	//ft_strcpy(a, b);
	printf("%s", ft_strcpy(a, b));
}