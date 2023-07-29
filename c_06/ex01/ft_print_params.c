/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:48:19 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/20 13:40:44 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_puchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				ft_puchar (argv[i][j]);
				++j;
			}
			i++;
			j = 0;
			ft_puchar ('\n');
		}
	}
	return (0);
}
