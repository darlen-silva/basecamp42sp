/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:21:10 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/19 03:48:43 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		if (str[count] >= 65 && str[count] <= 90)
			str[count] += 32;
		if (str[count] >= 97 && str[count] <= 122)
		{
			if ((str[count - 1] >= ' ' && str[count - 1] <= '/')
				|| (str[count - 1] >= ':' && str[count - 1] <= '@')
				|| (str[count - 1] >= '[' && str[count - 1] <= '`')
				|| (str[count - 1] >= '{' && str[count - 1] <= '~'))
			{
				str[count] -= 32;
			}
		}
		count++;
	}
	return (str);
}
