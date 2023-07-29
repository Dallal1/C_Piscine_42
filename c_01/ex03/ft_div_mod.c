/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:29:16 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/10 19:16:00 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
/*
int	main()
{
	int a,b;
	int div,mod;
	
	a = 10;
	b = 0;
	ft_div_mod (a, b, &div, &mod);
	printf ("a / b = %d\n a / b = %d", div, mod); 
	return 0;		
}*/
