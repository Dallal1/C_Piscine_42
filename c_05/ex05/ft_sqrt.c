/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:47:20 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/20 08:52:30 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	if (number <= 0)
	{
		return (0);
	}
	if (number == 1)
	{
		return (1);
	}
	i = 2;
	if (number >= 2)
	{
		while (i * i <= number)
		{
			if (i * i == number)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
int main ()
{
    int nb;
    int result;

    nb = 100000000;
    result = ft_sqrt(nb);
    printf ("%d", result);
    return (0);
}*/
