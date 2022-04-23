/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:13:37 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:37:26 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Replicates strncpy
char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char a[] = "dsdsas";
	char b[] = "";
	//ft_strcpy(a, b);
	printf("%s", ft_strncpy(a, b, 3));
}