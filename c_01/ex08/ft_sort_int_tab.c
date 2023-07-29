/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:57:48 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/11 12:11:56 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tamp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tamp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = tamp;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int num[5] = {3, 4, 2, 1, 5};
	int size = sizeof(num) / sizeof(num[0]);
	ft_sort_int_tab(num, size);

	for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
	return (0);
}*/
