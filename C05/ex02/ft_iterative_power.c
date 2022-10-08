/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:39:40 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/23 05:11:07 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	count;

	pow = nb;
	count = 0;
	if (power == -1)
		return (1);
	if (nb == 0 || nb == 1)
		return (nb);
	if (power < 0)
		return (0);
	while (++count < power)
		pow *= nb;
	return (pow);
}
