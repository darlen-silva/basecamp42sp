/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:29:26 by dardo-na          #+#    #+#             */
/*   Updated: 2022/10/21 20:29:30 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		count;

	if (ac == 1)
	{
		count = 0;
		while (av[0][count])
		{
			write(1, &av[0][count], 1);
			count++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
