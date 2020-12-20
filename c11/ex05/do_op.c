/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:51:51 by kgale             #+#    #+#             */
/*   Updated: 2020/08/25 09:51:54 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	ft_atoi(char *str)
{
	int			minus;
	long int	output;
	int			i;

	minus = 1;
	output = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n'
	|| str[i] == '\t' || str[i] == '\v'
	|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		output = output * 10 + (str[i] - 48);
		i++;
	}
	return (minus * output);
}

long int	ft_calc(long int num1, char *oper, long int num2)
{
	if (oper[0] == '+' && oper[1] == '\0')
		return (num1 + num2);
	else if (oper[0] == '-' && oper[1] == '\0')
		return (num1 - num2);
	else if (oper[0] == '*' && oper[1] == '\0')
		return (num1 * num2);
	else if (oper[0] == '%' && oper[1] == '\0')
		return (num1 % num2);
	else if (oper[0] == '/' && oper[1] == '\0')
		return (num1 / num2);
	else
		return (0);
}

void		ft_putnbr(long int nb)
{
	char	str[20];
	int		i;

	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	while (nb || (i == 0))
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &str[--i], 1);
	}
	write(1, "\n", 1);
}

int			main(int argc, char **argv)
{
	if (argc == 4 && ft_atoi(argv[3]) == 0 && *argv[2] == '/'
	&& argv[2][1] == '\0')
		write(1, "Stop : division by zero\n", 24);
	else if (argc == 4 && ft_atoi(argv[3]) == 0 && *argv[2] == '%'
	&& argv[2][1] == '\0')
		write(1, "Stop : modulo by zero\n", 24);
	else if (argc == 4)
		ft_putnbr(ft_calc(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3])));
	return (0);
}
