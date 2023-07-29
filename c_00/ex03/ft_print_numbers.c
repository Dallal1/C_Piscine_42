/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:25:05 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/07 12:21:55 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_pint(int i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	int	nums;

	nums = '0';
	while (nums <= '9')
	{
		ft_pint(nums);
		nums++;
	}
}
