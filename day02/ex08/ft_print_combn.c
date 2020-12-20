/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 00:36:09 by kgale             #+#    #+#             */
/*   Updated: 2020/08/13 11:36:07 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n)
{
	char	output[n];
	int	i;
	int	num;

	i = 2^(n-1);
	while(num < n)
	{
		output[num] = '0';
		num++;
	}
	while (i < 2^n)
	{
		i++;
	}
}
int	main(void)
{
	int	n;

	n = 4;
	ft_print_combn(n);
}
