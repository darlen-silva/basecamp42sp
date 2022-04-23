/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:35:46 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/16 03:45:51 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		v_aux;
	int		count1;
	int		count2;

	count1 = size - 1;
	count2 = 0;
	while (count2 < count1)
	{
		v_aux = tab[count2];
		tab[count2] = tab[count1];
		tab[count1] = v_aux;
		count2++;
		count1--;
	}
}
