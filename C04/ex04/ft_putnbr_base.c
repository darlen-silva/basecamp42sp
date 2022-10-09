/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:58:56 by dardo-na          #+#    #+#             */
/*   Updated: 2022/10/08 22:59:04 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	check_base(char *base)
{
	int	i;
	int	c;

	i = 0;
	while (base[i])
	{
		c = i;
		while (base[c++])
		{
			if (base[i] == base[c] || base[i] == '+' || base[i] == '-')
				return (0);
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		ans;
	char	tmp;
	long	tmpnbr;

	tmpnbr = nbr;
	ans = check_base(base);
	if (ans < 2)
		return ;
	if (tmpnbr < 0)
	{
		tmpnbr = -tmpnbr;
		write(1, "-", 1);
	}	
	if (tmpnbr == 0)
		return ;
	tmp = base[tmpnbr % ans];
	ft_putnbr_base(tmpnbr / ans, base);
	write(1, &tmp, 1);
}
