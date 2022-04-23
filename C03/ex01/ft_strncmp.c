/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:48:58 by dardo-na          #+#    #+#             */
/*   Updated: 2022/04/21 18:34:35 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] == s2[count] && count < n - 1)
	{
		if (s1[count] == '\0')
			return (0);
		count++;
	}
	if (n == 0)
		return (0);
	return (s1[count] - s2[count]);
}
