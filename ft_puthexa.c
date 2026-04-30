/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 20:51:18 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/30 21:02:11 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_puthexa(unsigned int nb)
{
        int     	count;
        char    	nbr;
	char	*hex;

	hex = "0123456789abcdef";
        count = 0;
        if (nb > 15)
                count += ft_puthexa(nb / 16);
        nbr = hex[(nb % 16)];
        write(1, &nbr, 1);
        count ++;
        return (count);
}

