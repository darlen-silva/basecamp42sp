/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:46:33 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/21 00:45:02 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*range_array;
	unsigned int	i;

	if (min < max)
	{
		range_array = malloc((max - min) * sizeof(int));
		i = 0;
		if (range_array)
		{
			while (min < max)
			{
				range_array[i] = min;
				min++;
				i++;
			}
		}
		return (range_array);
	}
	return (0);
}

