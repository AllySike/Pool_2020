/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:35:29 by kgale             #+#    #+#             */
/*   Updated: 2020/08/15 19:13:11 by kgale            ###   ########.fr       */
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
