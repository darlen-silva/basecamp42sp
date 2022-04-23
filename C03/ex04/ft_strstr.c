/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:06:16 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/21 20:18:02 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*aux_str;
	char	*aux_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		aux_str = str;
		aux_to_find = to_find;
		while (*aux_str == *aux_to_find && *aux_to_find != '\0')
		{
			aux_str++;
			aux_to_find++;
		}
		if (*aux_to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
