/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 20:28:04 by kgale             #+#    #+#             */
/*   Updated: 2020/08/15 21:33:07 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 64 && str[count] < 91)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (count == 0 && (str[count] > 96 && str[count] < 123))
			str[count] -= 32;
		else
		{
			if ((str[count - 1] < 48
						|| (str[count - 1] < 65 && str[count - 1] > 57)
						|| (str[count - 1] < 97 && str[count - 1] > 90)
						|| str[count - 1] > 122)
					&& (str[count] < 123 && str[count] > 96))
				str[count] -= 32;
		}
		count++;
	}
	return (str);
}
