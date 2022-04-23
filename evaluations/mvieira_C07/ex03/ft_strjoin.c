/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:30:15 by mvieira-          #+#    #+#             */
/*   Updated: 2022/04/20 17:50:46 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	totalsize(int size, char **strs, char *sep);
int	ft_strlen(char *str);
int	putsep(int returnstrtrindex, char *sep, char *returnstr);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*returnstr;
	int		returnstrindex;
	int		j;
	int		i;

	returnstr = malloc(totalsize(size, strs, sep) * sizeof(char));
	if (returnstr == NULL)
		return (NULL);
	returnstrindex = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			returnstr[returnstrindex] = strs[j][i];
			returnstrindex++;
			i++;
		}
		if (totalsize(size, strs, sep) != returnstrindex + 1)
			returnstrindex = putsep(returnstrindex, sep, returnstr);
	j++;
	}
	returnstr[returnstrindex] = '\0';
	return (returnstr);
}

int	putsep(int returnstrtrindex, char *sep, char *returnstr)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		returnstr[returnstrtrindex] = sep[i];
		returnstrtrindex++;
		i++;
	}
	return (returnstrtrindex);
}

int	totalsize(int size, char **strs, char *sep)
{
	int	i;
	int	totalsize;

	if (size < 1)
	{
		return (1);
	}
	i = 0;
	totalsize = 0;
	while (i < size)
	{
		totalsize = totalsize + ft_strlen(strs[i]);
		i++;
	}
	totalsize = totalsize + (ft_strlen(sep) * (size - 1) + 1);
	return (totalsize);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
