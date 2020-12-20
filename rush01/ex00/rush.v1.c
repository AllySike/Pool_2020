/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 17:09:28 by kgale             #+#    #+#             */
/*   Updated: 2020/08/22 17:09:30 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	***ft_output(void)
{
	int	***output;
	int	i;
	int	j;
	int	k;
	int ii = 0;
	int jj = 0;

	output = (int ***)malloc(sizeof(int **) * 4);
	while (ii < 4)
	{
		jj = 0;
		output[ii] = (int **)malloc(sizeof(int **) * 4);
		while (jj < 4)
		{
			output[ii][jj] = (int *)malloc(sizeof(int) * 4);
			jj++;
		}
		ii++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k++ < 4)
			{
				output[i][j][k - 1] = k;
			}
			j++;
		}
		i++;
	}
	return (output);
}

int ***ft_free_malloc(int ***arr, int i, int j, int k)
{
	int	*unit;
	int	l;
	int	gg;
	int	f;

	l = 0;
	gg = 0;
	f = 0;
	unit = (int *)malloc(sizeof(int) * 4);
	while (unit != NULL && l < 4)
	{
		if (arr[i][j][l] != k)
		{
			free(arr[i][j][l]);
		}
		l++;
	}
	return (arr);
}
int main()
{
	int ***out;

  out = ft_output();
  printf("До удаления %d\n", out[0][0][0]);
  ft_free_malloc(out, 1, 1, 1);
  printf("\nПосле %d", out[0][0][0]);
}
