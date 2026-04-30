/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:58:40 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/30 21:09:36 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include  <stdio.h>

int     main()
{
        int     count;
	int	count_1;

        count = ft_printf("h%cel %q  %s %d %i le %u %% %x", 'm', "hello", 2456, 74877644, 4294967295, 0);
	printf("\n");
	count_1 = printf("h%cel %q  %s %d %i le %u %% %x", 'm', "hello",2453, 7454654, 4294967295,0);
        printf("\n%d\n", count);
	printf("%d\n", count_1);

}

