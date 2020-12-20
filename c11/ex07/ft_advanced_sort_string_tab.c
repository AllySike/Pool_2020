/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 01:36:00 by kgale             #+#    #+#             */
/*   Updated: 2020/08/26 20:23:48 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (*tab[i])
	{
		j = 1;
		while (*tab[j])
		{
			if (i != j && cmp(tab[j - 1], tab[j]) >= 0)
			{
				str = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = str;
			}
			j++;
		}
		i++;
	}
}
