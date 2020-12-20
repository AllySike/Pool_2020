/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:38:43 by kgale             #+#    #+#             */
/*   Updated: 2020/08/16 18:38:45 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	while (*str && *to_find)
	{
		i = 0;
		count = 0;
		while (str[i] == to_find[i] || to_find[i] == '\0')
		{
			if (to_find[i] == '\0')
				return (str);
			i++;
			count++;
		}
		str++;
	}
	return (str);
}
