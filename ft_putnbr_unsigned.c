/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:06:26 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 10:10:13 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int nbr)
{
	int	n;

	n = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		n++;
		nbr = nbr / 10;
	}
	return (n);
}

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int				count;
	unsigned int	n;

	n = nbr;
	count = 0;
	count = ft_len(n);
	if (nbr > 9)
	{
		ft_putnbr_unsigned(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else if (nbr < 10)
		ft_putchar(nbr + '0');
	return (count);
}
