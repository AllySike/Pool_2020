/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:38:01 by kgale             #+#    #+#             */
/*   Updated: 2020/08/17 15:38:04 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int minus;
	int output;
	int numb;

	minus = 1;
	numb = 0;
	output = 0;
	while (*str)
	{
		if (*str == '-' && numb == 0)
			minus *= -1;
		else if (*str <= '9' && *str >= '0')
		{
			numb = 1;
			output = output * 10 + (*str - 48);
		}
		else if ((numb == 1 && !(*str <= '9' && *str >= '0'))
		|| (*str == ' ' && (*(str - 1) == '+' || *(str - 1) == '-'))
		|| (*str != ' ' && *str != '+' && *str != '-'))
			return (minus * output);
		str++;
	}
	return (minus * output);
}
