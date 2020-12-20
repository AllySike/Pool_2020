/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 23:03:16 by kgale             #+#    #+#             */
/*   Updated: 2020/08/26 20:00:33 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
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
			if (i != j && ft_strcmp(tab[j - 1], tab[j]) >= 0)
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
