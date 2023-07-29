/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:44:39 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/20 17:39:10 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
int	main ()
{
	int index;

	index = 5;
	ft_fibonacci(index);
	for(int i = 0; i <= index; i++)
		printf ("%d\t",ft_fibonacci(i));
	printf ("\n%d", ft_fibonacci(index));
	return (0);
}
