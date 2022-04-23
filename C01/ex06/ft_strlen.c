/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:26:57 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/21 03:54:27 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlen(char *dest, char *src)
{
	//int	count;
	while ((*dest = *src) != '\0') 
	{
		dest++;
		src++;
	}
}

#include <stdio.h>
int main(void)
{
	char a[] = "hello";
	char b[] = "fdfdfdfd";
	//printf("%s\n", ft_strlen(b, a));
	ft_strlen(b, a);
}