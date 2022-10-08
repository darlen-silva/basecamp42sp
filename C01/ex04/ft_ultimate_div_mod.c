/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:02:52 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/20 01:59:04 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	v_temp;
	int	v_temp2;

	v_temp = *a;
	v_temp2 = *b;
	*a = v_temp / v_temp2;
	*b = v_temp % v_temp2;
}
