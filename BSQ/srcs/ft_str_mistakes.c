/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_mistakes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 17:02:33 by kgale             #+#    #+#             */
/*   Updated: 2020/09/02 23:20:08 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_str_mistakes.h"
#include "../includes/ft_str.h"
#include <stdlib.h>

void	ft_putchar_mistakes(char c)
{
	write(2, &c, 1);
}

void	ft_putstr_mistakes(char *str)
{
	while (*str)
		ft_putchar_mistakes(*str++);
}
