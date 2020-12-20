/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 17:24:42 by kgale             #+#    #+#             */
/*   Updated: 2020/08/23 17:24:44 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_create_arr()
{
	int **arr;
	int	i;

	i = 0;
	arr = (int **)malloc(sizeof(int **) * 4);
	while (i < 4)
	{
		arr[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
	return (arr);
}

int		ft_check(int i, int j, int **arr, int num)
{
	int	j_const;
	int i_const;

	j_const = j;
	i_const = i;
	while (j_const > 0)
	{
		if(arr[i][j_const] == num)
			return (1);
		j_const--;
	}
	while (i_const > 0)
	{
		if(arr[i_const][j] == num)
			return (1);
		i_const--;
	}
	return (0);
}

void	ft_check(int **arr)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	num = 1;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			while (num <= 4)
			{
				arr[i][j] = num;
				if (ft_check(i, j, **arr, num) == 1 && num < 4)
					num++;
				else if (num == 4 && j != 0)
				{
					j--;
				}
				else if ((num == 4) && (j = 0 && i > 0))
				{
					i--;
					j = 3;
				}
				else
					break;
				j++;
			}
		}
		i++;
	}
}

int		main()
{
	int **f = ft_create_arr();
}
