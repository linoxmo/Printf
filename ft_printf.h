/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagoudi <tmagoudi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:03:43 by tmagoudi          #+#    #+#             */
/*   Updated: 2026/04/30 20:57:12 by tmagoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <stdint.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c);
size_t	ft_strlen(const char *s);
int	ft_putstr(const char *s);
int	ft_printf(const char *, ...);
int	ft_putnbr(int	nb);
int	ft_putup(unsigned int nb);
int	ft_puthexa(unsigned int nb);
#endif
