/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 05:36:37 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/22 03:56:12 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_content_to_hexa(char c);
void	ft_convert_address_to_hexa(void *addr);
void	ft_print_line(void *addr, int size);
void	*ft_print_memory(void *addr, unsigned int size);
void	ft_putchar(char c);

// Print character passed as parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Converts first character of line address to hexadecimal number
void	ft_convert_address_to_hexa(void *addr)
{
	char	caddr[15];
	long	laddr;
	int		i;

	laddr = (long)addr;
	i = 0;
	while (laddr > 0)
	{
		caddr[i] = laddr % 16;
		if (caddr[i] < 10)
			caddr[i] = caddr[i] + '0';
		else
			caddr[i] = caddr[i] + 87;
		laddr = laddr / 16;
		i++;
	}
	while (i < 15)
	{
		caddr[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(caddr[i]);
}

// Converts line message content to hexadecimal number
void	ft_content_to_hexa(char c)
{
	int		negative;
	char	n1;
	char	n2;

	if (c < 0)
	{
		negative = (-128 - (c)) * -1 + 128;
		n1 = negative / 16;
		n2 = negative % 16;
	}
	else
	{
		n1 = c / 16;
		n2 = c % 16;
	}
	if (n1 < 10)
		ft_putchar(n1 + '0');
	else
		ft_putchar(n1 + 87);
	if (n2 < 10)
		ft_putchar(n2 + '0');
	else
		ft_putchar(n2 + 87);
}

//	Print 16 characters of string per line
void	ft_print_line(void *addr, int size)
{
	int		i;
	int		to_print;
	char	*addr_c;

	addr_c = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_content_to_hexa(addr_c[i++]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	to_print = ((16 - size) * 2) + (19 - size) / 2;
	while (--to_print > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i]);
		else
			ft_putchar('.');
	}
}

//	Shows a memory zone on the screen
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	char_to_print;
	unsigned int	off;

	off = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			char_to_print = 16;
			size -= 16;
		}
		else
		{
			char_to_print = size;
			size = 0;
		}
		ft_convert_address_to_hexa(addr + off);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_line(addr + off, char_to_print);
		ft_putchar('\n');
		off += 16;
	}
	return (addr);
}

#include <string.h>

void    *ft_print_memory(void *addr, unsigned int size);

int    main(void)
{
    char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

    ft_print_memory(str, strlen(str));
    return (0);
}