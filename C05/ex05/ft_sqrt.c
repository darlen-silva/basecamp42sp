/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:51:02 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/23 05:13:47 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	start;

	start = 0;
	if (nb == 1 || nb == 2)
		return (1);
	if (nb < 0)
		return (0);
	while (start <= nb / 2)
	{
		if (start * start == nb)
			return (start);
		start++;
	}
	return (0);
}
