/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:49:30 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 09:50:44 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_format(unsigned long long ptr)
{
	int	count;

	count = 0;
	while (ptr != 0)
	{
		count++;
		ptr = ptr / 16;
	}
	return (count);
}

static void	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	if (ptr == 0)
		count += ft_putchar('0');
	else
	{
		ft_putptr((unsigned long long)ptr);
		count += ft_len_format((unsigned long long)ptr);
	}
	return (count);
}
