/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 00:51:53 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/19 02:36:25 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((int)str[count] < 65 || (int)str[count] > 122)
			return (0);
		if ((int)str[count] > 90 && (int)str[count] < 97)
			return (0);
		count++;
	}
	return (1);
}
