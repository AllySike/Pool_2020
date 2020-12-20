/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:57:24 by kgale             #+#    #+#             */
/*   Updated: 2020/09/02 20:38:28 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPEN_AND_READ_H
# define FT_OPEN_AND_READ_H

int		ft_open(char *file);
int		ft_read(int check_open, char *file);
int		*ft_max_width(char *file);
char	**ft_open_and_read(char *file, int *ijlen, int i);
int		*ft_count_ijlen(int *out, char symbol, int end);

#endif
