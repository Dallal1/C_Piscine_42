/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:39:50 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/23 08:07:58 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	int	*range;
	int	i;
	int	result;

	i = 0;
	result =  ft_ultimate_range(&range, 0, 10);
	printf ("%d", result);
//	while (i < 10)
//	{
//		printf("%d\n", range[i]);
//		i++;
//	}
	return (0);
}*/
