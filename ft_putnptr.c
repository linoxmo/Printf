/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:01:11 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/05/02 11:25:30 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int   ft_puthexaralph(unsigned long long nb)
{
        int            count;
        char            nbr;
        char    *hex;

        hex = "0123456789abcdef";
        count = 0;
        if (nb > 15)
                count += ft_puthexaralph(nb / 16);
        nbr = hex[(nb % 16)];
        write(1, &nbr, 1);
        count ++;
        return (count);
}
int	ft_putnptr(unsigned long long  ptr)
{
	
	if (!ptr)
		return (write(1,"(nil)", 5));
	write(1, "0x", 2);
	return ((ft_puthexaralph(ptr)) + 2);
	
}
