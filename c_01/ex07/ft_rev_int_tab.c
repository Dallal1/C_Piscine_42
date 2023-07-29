/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:13:28 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/12 16:18:19 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		printf("%d", tab[i]);
		i++;
	}
}
#include <stdio.h>
int	main(void)
{
	int nam[5] = {1,2,3,4,5};
	int size = sizeof(nam) / sizeof(nam[0]);

	ft_rev_int_tab(nam, size);
	//printf("%d", nam);
	return (0);
}
