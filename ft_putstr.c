/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:10:43 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 10:12:23 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *format)
{
	int	i;

	i = 0;
	if (format == NULL)
		return (write(1, "(null)", 6));
	if (*format == '\0')
		return (0);
	while (format[i])
	{
		ft_putchar(format[i]);
		i++;
	}
	return (i);
}
