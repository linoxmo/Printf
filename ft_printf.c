/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:29:05 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/30 20:58:29 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_put(char c, va_list parameters)
{
	if (c == 'c')
		return (ft_putchar(va_arg(parameters, int)));
	if (c == 's')
		return (ft_putstr(va_arg(parameters, char *)));
	if (c == 'd'|| c == 'i')
		return (ft_putnbr(va_arg(parameters, int)));
	if (c == 'u')
		return (ft_putup(va_arg(parameters, unsigned int)));
	if (c == '%')
		return(ft_putchar(c));
	if (c == 'x')
		return (ft_puthexa(va_arg(parameters, unsigned int)));
	return (0);
}

static	int	is_special_c(char c)
{
	if ( c == 'c' || c == 's' || c == 'd' || c == 'u' || c == 'i' || c == '%' || c == 'x')
		return(1);
	return(0);

}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int	count;
	va_list parameters;
	
	count = 0;
	i = -1;
	va_start(parameters, str);
	while (str[++i])
	{
		if (str[i] == '%' && is_special_c(str[i+1]))
		{
			count += ft_put(str[i+1], parameters);
			i++;
		}
		else 
			count += ft_putchar(str[i]);
	}
	va_end(parameters);
	return(count);
}

