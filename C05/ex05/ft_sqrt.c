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

int ft_sqrt(int nb)
{
	int start;
	int count;

	count = 0;
	start = 0;
	if (nb == 1)
		return (1);
	if (nb % 10 == 2 || nb % 10 == 3 || nb % 10 == 7 || nb % 10 == 8)
		return (0);
	// if (nb > 10000)
	// 	count = 100;
	// else if (nb > 100000)
	// 	count = 316;
	// else if (nb > 1000000)
	// 	count = 1000;
	while (start <= 9)
	{
		if ((start * start) % 10 == nb % 10)
		{
			count = start;
			while (count * count <= nb + 10)
			{
				if (count * count == nb)
					return (count);
				count += 10;
			}
		}
		start++;
	}
	return (0);
}
