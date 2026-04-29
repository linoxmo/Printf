/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:29:05 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/29 18:04:50 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		count += ft_putchar(str[i]);
	}
	
	va_end(parameters);
	return(count);
}

