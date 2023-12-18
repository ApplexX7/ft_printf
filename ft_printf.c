/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:26:47 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 09:56:58 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(va_list hokaji, const char sp)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += ft_putchar(va_arg(hokaji, int));
	else if (sp == 's')
		count += ft_putstr(va_arg(hokaji, char *));
	else if (sp == 'p')
		count += ft_print_ptr(va_arg(hokaji, void *));
	else if (sp == 'd' || sp == 'i')
		count += ft_putnbr(va_arg(hokaji, int));
	else if (sp == 'x' || sp == 'X')
		count += ft_puthexa(va_arg(hokaji, unsigned int), sp);
	else if (sp == 'u')
		count += ft_putnbr_unsigned(va_arg(hokaji, unsigned int));
	else if (sp == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(sp);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	hokaji;
	int		count;
	int		i;

	i = 0;
	va_start(hokaji, format);
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += ft_print_format(hokaji, format[i + 1]);
			i = i + 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(hokaji);
	return (count);
}
