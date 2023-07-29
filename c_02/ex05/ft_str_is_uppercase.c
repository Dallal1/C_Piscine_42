/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:16:53 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/12 13:27:31 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count_uppercase;

	count_uppercase = 1;
	i = 0;
	if (str[i] == '\0')
	{
		count_uppercase = 1;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			count_uppercase = 0;
		i++;
	}
	return (count_uppercase);
}
/*
int	main()
{
	char str[] = "D";
	int len;
	len =  ft_str_is_uppercase (str);
	printf ("%d", len);
	return (0);
}*/
