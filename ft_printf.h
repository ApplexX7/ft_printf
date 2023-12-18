/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:00:22 by mohilali          #+#    #+#             */
/*   Updated: 2023/11/12 10:17:24 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_puthexa(unsigned int n, const char format);
int	ft_putnbr(int nbr);
int	ft_print_ptr(void *ptr);
int	ft_printf(const char *format, ...);
int	ft_putnbr_unsigned(unsigned int nbr);

#endif
