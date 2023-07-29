/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:57:41 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/24 20:54:12 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_point.h"

void	set_point(t_point *point)
{
	point -> x = 64846;
	point -> y = 21;
}
#include <stdio.h>
int	main(void)
{
	t_point	point;
	
	set_point (&point);
	printf ("%d", point.x);
	return (0);
}
