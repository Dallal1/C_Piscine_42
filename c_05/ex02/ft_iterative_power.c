/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:27:57 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/18 12:32:49 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i++ < power)
		n *= nb;
	return (n);
}
/*
int	main()
{
	int	nb;
	int	power;
	int	result;

	nb = 5;
	power = 3;
	result = ft_iterative_power(nb,power);
	printf ("%d", result);
	return (0);

}*/
