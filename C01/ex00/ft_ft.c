/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:40:26 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/20 01:19:26 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(char *nbr)
{
	int count = 0;
	while (nbr[count] != '\0')
	{
		printf("%c", nbr[count]);
		count++;
	}
}


int main(void)
{
	char n[] = "hello world!";

	printf("%d \n", n);
	ft_ft(n);
	printf("\n%c \n", *n);

}