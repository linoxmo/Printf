/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putHEXA.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:28:09 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/05/01 13:29:43 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_putHEXA(unsigned int nb)
{
        int             count;
        char            nbr;
        char    *HEX;

        HEX = "0123456789ABCDEF";
        count = 0;
        if (nb > 15)
                count += ft_putHEXA(nb / 16);
        nbr = HEX[(nb % 16)];
        write(1, &nbr, 1);
        count ++;
        return (count);
}
