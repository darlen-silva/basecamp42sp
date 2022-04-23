/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 04:23:49 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/21 18:57:03 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char a[] = "dsdsas";
	char b[] = "hello\n";
	//ft_strcpy(a, b);
	printf("%s", ft_strcpy(a, b));
}