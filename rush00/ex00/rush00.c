/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:53:45 by kgale             #+#    #+#             */
/*   Updated: 2020/08/16 18:02:12 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_str(char a, char b, int n)
{
	ft_putchar(a);
	if (n > 1)
	{
		while (n-- > 2)
			ft_putchar(b);
		ft_putchar(a);
	}
	ft_putchar('\n');
}

void	rush(int y, int x)
{
	if (y > 0 && x > 0)
	{
		ft_print_str('o', '-', y);
		if (x > 1)
		{
			while (x-- > 2)
				ft_print_str('|', ' ', y);
			ft_print_str('o', '-', y);
		}
	}
}
