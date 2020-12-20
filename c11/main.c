/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 11:33:59 by tlucanti          #+#    #+#             */
/*   Updated: 2020/08/26 19:16:17 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_foreach.c"
#include "ex01/ft_map.c"
#include "ex02/ft_any.c"
#include "ex03/ft_count_if.c"
#include "ex04/ft_is_sort.c"
#include <stdio.h>

void f(int a) {
	printf("%d ", a);
}
int g(int a) {
	return -a;
}
int h(char *a) {
	return (*a=='a');
}
int i(char *a) {
	return (*a!='a');
}
int j(int a, int b) {
	if (a > b)
		return (1);
	else if (a == b)
		return (0);
	return(-1);
}
int main() {
	printf("\n==================== ex00 ====================\n\n");
	int a1[] = {1,2,3,4,5,6,7,8,9,0};
	printf("1 2 ... 9 0 -> ");
	ft_foreach(a1, 10, f);

	printf("\n\n==================== ex01 ====================\n\n");
	int a2[] = {1,2,3,4,5,6,7,8,9,0};
	printf("-1, -2, ..., -9, 0 -> ");
	ft_foreach(ft_map(a2, 10, g), 10, f);
printf("\n\n==================== ex02 ====================\n\n");
	char **arr1 = (char **)malloc(sizeof(char*)* 4);
	char ar1[] = "qwe";
	char ar2[] = "rty";
	char ar3[] = "uio";
	arr1[0] = ar1;
	arr1[1] = ar2;
	arr1[2] = ar3;
	arr1[3] = 0;
	printf("0 -> %d\n", ft_any(arr1, h));
	arr1[2][0] = 'a';
	printf("1 -> %d\n", ft_any(arr1, h));
printf("\n==================== ex03 ====================\n\n");
	char **arr2 = (char **)malloc(sizeof(char*)* 4);
	char ar4[] = "qwe";
	char ar5[] = "rty";
	char ar6[] = "uio";
	arr2[0] = ar4;
	arr2[1] = ar5;
	arr2[2] = ar6;
	arr2[3] = 0;
	printf("3 -> %d\n", ft_count_if(arr2, 3, i));
	arr2[2][0] = 'a';
	printf("2 -> %d\n", ft_count_if(arr2, 3, i));
printf("\n\n==================== ex04 ====================\n\n");
	int a3[] = {1,2,3,4,5,6,7,8,9,0};
	printf("0 -> %d\n", ft_is_sort(a3, 10, j));
	a3[9] = 10;
	printf("1 -> %d\n", ft_is_sort(a3, 10, j));
	int a4[] = {1,1,1,1,1,1,1,1,1,1};
	printf("1 -> %d\n", ft_is_sort(a4, 10, j));
	int a5[] = {9,8,7,6,5,4,3,2,1,0};
	printf("1 -> %d\n", ft_is_sort(a5, 10, j));
	a5[1] = 9;
	printf("1 -> %d\n", ft_is_sort(a5, 10, j));
	a5[0] = 0;
	printf("0 -> %d\n", ft_is_sort(a5, 10, j));
	int a6[] = {};
	printf("0 -> %d\n", ft_is_sort(a6, 0, j));
}
