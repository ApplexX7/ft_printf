/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:04:16 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 10:06:10 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	else if (nbr < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putchar(nbr % 10 + '0');
	}
	else
	{
		count += ft_putchar(nbr + '0');
	}
	return (count);
}
