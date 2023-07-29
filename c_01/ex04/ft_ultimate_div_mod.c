/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:21:40 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/10 19:52:54 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}
/*
int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf ("a = %d\nb = %d", a, b);
	return (0);
}*/
