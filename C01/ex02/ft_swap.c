/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:51:38 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/20 01:28:59 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	a_temp;

	a_temp = *a;
	*a = *b;
	*b = a_temp;
}

#include <stdio.h>

int main (void)
{
	int a = 43;
	int b = 54;

	printf("%d %d\n", a , b);
	ft_swap(&a, &b);
	printf("%c %d\n", a, b);

}