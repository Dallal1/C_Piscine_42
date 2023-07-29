/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:54:46 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/14 18:44:10 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count_number;

	count_number = 1;
	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			count_number = 0;
		}
		i++;
	}
	return (count_number);
}
/*
int	main()
{
	char str[] = "1a";
	int len;
	len = ft_str_is_numeric(str);
	printf ("%d", len);
	return (0);
}*/
