/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:00:05 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/09 08:41:05 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(int i, int j, int k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i;
		while (++j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_write (i, j, k);
				if (i != '7' || j != '8' || k != '9')
					write (1, ", ", 2);
				k++;
			}
		}
		i++;
	}
}
