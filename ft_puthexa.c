/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:59:44 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 10:04:00 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_format(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 16;
	}
	return (count);
}

static void	ft_put_hexa_format(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_put_hexa_format(nbr / 16, format);
		ft_put_hexa_format(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
		{
			if (format == 'X')
				ft_putchar(nbr - 10 + 'A');
			else if (format == 'x')
				ft_putchar(nbr - 10 + 'a');
		}
	}
}

int	ft_puthexa(unsigned int n, const char format)
{
	int	count;

	count = 0;
	ft_put_hexa_format(n, format);
	count = ft_len_format(n);
	return (count);
}
