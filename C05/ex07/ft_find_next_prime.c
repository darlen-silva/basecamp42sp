/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:54:45 by dardo-na          #+#    #+#             */
/*   Updated: 2022/05/18 19:55:05 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb + 10)
	{
		if (nb % i == 0 && i * i <= nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	count;

	count = nb;
	if (!ft_is_prime(nb))
	{
		while (!ft_is_prime(count))
			count++;
	}
	return (count);
}
