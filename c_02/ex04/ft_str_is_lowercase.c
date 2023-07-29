/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:02:34 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/13 08:03:00 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count_lowarcase;

	count_lowarcase = 1;
	i = 0;
	if (str[i] == '\0')
	{
		count_lowarcase = 1;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			count_lowarcase = 0;
		i++;
	}
	return (count_lowarcase);
}
/*
int	main()
{
	char str[] = "aDa";
	int len;

	len =  ft_str_is_lowarcase(str);
	printf ("%d", len);
	return (0);
}*/
