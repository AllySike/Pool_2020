/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 08:27:33 by kgale             #+#    #+#             */
/*   Updated: 2020/08/15 08:36:16 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numeric;
	int i;

	numeric = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			numeric = 1;
		else
			return (0);
		i++;
	}
	return (numeric);
}
