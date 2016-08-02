/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:43:19 by yso               #+#    #+#             */
/*   Updated: 2016/07/25 15:43:22 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int n;
	int *A;

	printf("Enter size of array\n");
	scanf("%d", &n);

	A = (int*)malloc(n * sizeof(int));
	i = -1;
	while (++i < n)
	{
		A[i] = i + 1;
	}
	i = -1;
	while (++i < n)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	return (0);
}

