/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:46:35 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/20 01:43:28 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int main(void)
{
	int a = 454;

	int *a1 = &a;
	int **a2 = &a1;
	int ***a3 = &a2;
	int ****a4 = &a3;
	int *****a5 = &a4;
	int ******a6 = &a5;
	int *******a7 = &a6;
	int ********a8 = &a7;
	
	printf("%d\n", a);
	ft_ultimate_ft(&a8);
	printf("%d\n", a);
}