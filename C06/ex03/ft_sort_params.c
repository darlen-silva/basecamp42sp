/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:42:43 by dardo-na          #+#    #+#             */
/*   Updated: 2022/10/21 21:42:45 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_swap(char **s, int i, int j)
{
	char	*tmp;

	tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac > 1)
	{
		while (++i < ac)
		{
			j = i;
			while (++j < ac)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swap(av, i, j);
			}
		}
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
