/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:27:16 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/22 05:33:37 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			return (1);
		str++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	//char a[10] =
	printf("%x\n", ft_str_is_printable("hdhdhdhdhdhdhç\n"));
}