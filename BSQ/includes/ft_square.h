/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:06:02 by kstephai          #+#    #+#             */
/*   Updated: 2020/09/02 16:13:31 by kstephai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQUARE_H
# define FT_SQUARE_H

int		ft_min(int a, int b, int c);
int		**ft_put_nbr_square(char **input, int range, char empty, char obstacle);
int		**ft_find_square(int **input, int range, int len);
void	ft_change(int *input, char **output, char full, int *range);
int		*ft_get_index(int **input, int range, int len);

#endif
