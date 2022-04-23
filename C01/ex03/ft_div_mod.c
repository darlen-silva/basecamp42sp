/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 03:56:15 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/20 01:53:36 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int main(void)
{
	int a = 249;
	int b = 10;
	
	int div = 54354;
	int mod = 323232;

	printf("%d %d %d %d\n", a, b , div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);

}