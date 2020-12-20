/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 21:17:01 by kgale             #+#    #+#             */
/*   Updated: 2020/08/21 21:17:03 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_concat(char *arr1, char *arr2)
{
	int		i;
	int		j;
	char	*out;
	int		len1;
	int		len2;

	j = 0;
	i = 0;
	len1 = ft_strlen(arr1);
	len2 = ft_strlen(arr2);
	out = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!out)
		return (NULL);
	while (i < len1)
	{
		out[i] = arr1[i];
		i++;
	}
	while (j < len2)
	{
		out[j + i] = arr2[j];
		j++;
	}
	out[j + i] = '\0';
	return (out);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		i;

	if (size == 0)
		return ("\n");
	if (size == 1)
	{
		return (strs[0]);
	}
	i = 0;
	while (i < size - 1)
	{
		if (i == 0)
			out = strs[0];
		if (i != 0)
		{
			out = ft_concat(out, sep);
			out = ft_concat(out, strs[i]);
		}
		i++;
	}
	out = ft_concat(out, sep);
	out = ft_concat(out, strs[i]);
	return (out);
}
int main()
{
  int out[4][4][4];
  out = ft_output();
  //ft_free_malloc(out, 1, 1, 1);
}
