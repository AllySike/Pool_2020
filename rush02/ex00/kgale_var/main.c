/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 16:01:43 by kgale             #+#    #+#             */
/*   Updated: 2020/08/30 19:28:50 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft_dict.h"
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int					ft_strlen(char *str);
char				*ft_putnbr(long int nb);
void				ft_putstr(char *str);
unsigned long long	ft_atoi(char *str);
char				*ft_find(t_dict *list, char *str);

char				*ft_currstr(char *str, int i, int num)
{
	int		k;
	char	*out;
	int		j;

	k = 0;
	j = 0;
	if (num == 1 && i > 15)
		i = i - 15;
	if (num == 2 && i > 18)
		k = i - 18;
	out = (char *)malloc(sizeof(char) * i);
	while (k < i)
	{
		out[j] = str[k];
		j++;
		k++;
	}
	return (out);
}

void				ft_putnbr_helper(char *str, int len, int i, t_dict *dict)
{
	char				*currstr;
	unsigned long long	num;
	unsigned long long	count;

	num = 1000000000000000000;
	currstr = ft_currstr(str, len, i);
	count = ft_atoi(currstr);
	len = 18;
	while (num != 1)
	{
		num /= 1000;
		if (count / num != 0)
		{
			currstr = dict[0].nums;
			currstr = ft_putnbr(count / num);
		printf("%s ", ft_find(dict, currstr));
			//ft_putstr(ft_find(dict, ft_putnbr(count / num)));
			//ft_putstr(ft_find(dict, ft_putnbr(num * 1000000000000000)));
		}
		count = (unsigned long int)(count % num);
	}
}

void				ft_putdozs(int len, t_dict *dict, char *str)
{
		char	*doz;

		doz = (char*)malloc(sizeof(char) * 2);
		doz[0] = str[len - 3];
		doz[1] = str[len - 2];
		doz[2] = str[len - 1];
		if (doz[0] != '0')
		{
			//ft_putstr(ft_find(dict, &str[len - 3]));
			//ft_putstr(ft_find(dict, "100"));
		}
		if (str[len - 2] == '1')
			ft_putstr(ft_find(dict, doz));
		else
		{
			if (str[len - 2] != '0')
				ft_putstr(ft_find(dict, &str[len - 2]));
			if (str[len - 1] != '0')
				ft_putstr(ft_find(dict, &str[len - 1]));
		}
		write(1, "\n", 1);
}

void				ft_putnbrs(char *str, t_dict *dict)
{
	int					len;

	len =  ft_strlen(str);
	if (len > 18)
		ft_putnbr_helper(str, len, 1, dict);
	if (len > 3)
		ft_putnbr_helper(str, len, 2, dict);
	ft_putdozs(len, dict, str);
}

int					main()//int argc, char **argv)
{
	t_dict	*list;

	list = (t_dict *)malloc(sizeof(t_dict) * 41);
	list[0].letters = "zero\0";
	list[0].nums = "0\0";
	list[1].letters = "one\0";
	list[1].nums = "1\0";
	list[2].letters = "two\0";
	list[2].nums = "2\0";
	list[3].letters = "three\0";
	list[3].nums = "3\0";
	list[4].letters = "four\0";
	list[4].nums = "4\0";
	list[5].letters = "five\0";
	list[5].nums = "5\0";
	list[6].letters = "six\0";
	list[6].nums = "6\0";
	list[7].letters = "seven\0";
	list[7].nums = "7\0";
	list[8].letters = "eight\0";
	list[8].nums = "8\0";
	list[9].letters = "nine\0";
	list[9].nums = "9\0";
	list[10].letters = "ten\0";
	list[10].nums = "10\0";
	list[11].letters = "eleven\0";
	list[11].nums = "11\0";
	list[12].letters = "twelve\0";
	list[12].nums = "12\0";
	list[13].letters = "thirteen\0";
	list[13].nums = "13\0";
	list[14].letters = "fourteen\0";
	list[14].nums = "14\0";
	list[15].letters = "fifteen\0";
	list[15].nums = "15\0";
	list[16].letters = "sixteen\0";
	list[16].nums = "16\0";
	list[17].letters = "seventeen\0";
	list[17].nums = "17\0";
	list[18].letters = "eighteen\0";
	list[18].nums = "18";
	list[19].letters = "nineteen\0";
	list[19].nums = "19\0";
	list[20].letters = "twenty\0";
	list[20].nums = "20\0";
	list[21].letters = "thirty\0";
	list[21].nums = "30\0";
	list[22].letters = "forty\0";
	list[22].nums = "40\0";
	list[23].letters = "fifty\0";
	list[23].nums = "50\0";
	list[24].letters = "sixty\0";
	list[24].nums = "60\0";
	list[25].letters = "seventy\0";
	list[25].nums = "70\0";
	list[26].letters = "eighty\0";
	list[26].nums = "80\0";
	list[27].letters = "ninety\0";
	list[27].nums = "90\0";
	list[28].letters = "hundred\0";
	list[28].nums = "100\0";
	list[29].letters = "thousand\0";
	list[29].nums = "1000\0";
	list[30].letters = "million";
	list[30].nums = "1000000\0";
	list[31].letters = "billion\0";
	list[31].nums = "1000000000\0";
	list[32].letters = "trillion\0";
	list[32].nums = "1000000000000\0";
	list[33].letters = "quadrillion\0";
	list[33].nums = "1000000000000000\0";
	list[34].letters = "quintillion\0";
	list[34].nums = "1000000000000000000\0";
	list[35].letters = "sextillion\0";
	list[35].nums = "1000000000000000000000\0";
	list[36].letters = "septillion\0";
	list[36].nums = "1000000000000000000000000\0";
	list[37].letters = "octillion\0";
	list[37].nums = "1000000000000000000000000000\0";
	list[38].letters = "nonillion\0";
	list[38].nums = "1000000000000000000000000000000\0";
	list[39].letters = "decillion\0";
	list[39].nums = "1000000000000000000000000000000000\0";
	list[40].letters = "undecillion\0";
	list[40].nums = "1000000000000000000000000000000000000\0";
	ft_putnbrs("900324563834655787900", list);
	printf("\n9003245638900");
}
