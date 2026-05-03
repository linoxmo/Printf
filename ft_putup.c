/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 20:09:48 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/30 20:39:02 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putup(unsigned int nb)
{
	int		count;
	char	nbr;

	count = 0;
	if (nb > 9)
		count += ft_putup(nb / 10);
	nbr = (nb % 10) + 48;
	write(1, &nbr, 1);
	count++;
	return (count);
}
