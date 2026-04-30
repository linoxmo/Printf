/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:55:16 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/30 20:14:24 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_putnbr(int nb)
{
	int	count;
	char    nbr;

        count = 0;
	if (nb == -2147483648)
        {
                return (write(1, "-2147483648", 11));
        }
        if (nb < 0)
	{
                nb = -nb;
                write(1, "-", 1);
		count++;
        }
        if (nb > 9)	
                count += ft_putnbr(nb / 10);
        nbr = (nb % 10) + 48;
        write(1, &nbr, 1);
	count ++;
	return (count);
}	

