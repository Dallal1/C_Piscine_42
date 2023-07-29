/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:28:33 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/14 18:43:06 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;
	int	count_printable;

	count_printable = 1;
	i = 0;
	if (str[i] == '\0')
	{
		count_printable = 1;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
			count_printable = 0;
		i++;
	}
	return (count_printable);
}
/*
int	main()
{
	char str[] = "@#!$%^&";
	int len;
	len = ft_str_is_printable(str);
	printf ("%d", len);
	return (0);
}*/
