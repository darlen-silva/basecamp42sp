/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:20:29 by dardo-na          #+#    #+#             */
/*   Updated: 2022/10/08 23:20:33 by dardo-na         ###   ########.fr       */
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
		c = i + 1;
		while (base[c])
		{
			if (base[i] == base[c] || base[c] == '+' || base[c] == '-'
				|| base[c] == ' ' || (base[c] >= 9 && base[c] <= 13))
				return (0);
			c++;
		}
		i++;
	}
	if (!base || i == 1)
		return (0);
	return (i);
}

int	find_index(char str, char *base)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (base[i])
	{
		count = 0;
		while (base[count])
		{
			if (base[count] == str)
				return (count);
			count++;
		}
		i++;
	}
	return (-1);
}

int	ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
		return (nb * ft_power(nb, power - 1));
}

int	convert_base(char *str, char *base, int b)
{
	int	ans;
	int	i;
	int	val;
	int	j;

	i = 0;
	ans = 0;
	j = 0;
	while (!(find_index(str[i], base) < 0))
		i++;
	while (!(find_index(str[--i], base) < 0))
	{
		val = find_index(str[i], base);
		ans = ans + (val * ft_power(b, j));
		j++;
	}
	return (ans);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;
	int	val;
	int	mcount;

	b = check_base(base);
	mcount = 0;
	if (!b)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mcount++;
		str++;
	}
	val = convert_base(str, base, b);
	if (mcount % 2)
		val = -val;
	return (val);
}
