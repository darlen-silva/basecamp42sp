/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:35:41 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/22 16:57:56 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	valr;
	int	sign;
	int	mcount;

	valr = 0;
	sign = 1;
	mcount = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mcount++;
		str++;
	}
	if (mcount % 2 != 0)
		sign *= -1;
	while (*str >= '0' && *str <= '9')
	{
		valr = valr * 10 + *str - '0';
		str++;
	}
	return (valr * sign);
}
