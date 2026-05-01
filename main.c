/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:58:40 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:37 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include  <stdio.h>

int     main()
{
        int     count;
	int	count_1;
	char *test = "hello";
	char *test_1 = NULL;

        count = ft_printf("h%cel %q  %s %d %i le %u %% %x %X %p %p\n", 'm', "hello", 2456, 74877644, 4294967295, 0, 456, LONG_MAX - 1, LONG_MIN);
	printf("\n");
	count_1 = printf("h%cel %q  %s %d %i le %u %% %x %X %p %p", 'm', "hello",2453, 7454654, 4294967295,0, 456, ULONG_MAX - 1, -ULONG_MAX);
        printf("\n%d\n", count);
	printf("%d\n", count_1);

}

