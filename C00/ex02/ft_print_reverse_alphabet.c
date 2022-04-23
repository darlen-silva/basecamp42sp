/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:10:06 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/15 03:03:40 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	rev_alpha;

	rev_alpha = 122;
	while (rev_alpha >= 97)
	{
		write(1, &rev_alpha, 1);
		--rev_alpha;
	}
}
