/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:14:25 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/14 18:45:04 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count_alpha;

	count_alpha = 1;
	i = 0;
	if (str[i] == '\0')
	{
		count_alpha = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			count_alpha = 0;
		}
		i++;
	}
	return (count_alpha);
}
/*
int	main()
{
	char str[] = "abcd";
	int len;
	len = ft_str_is_alpha(str);
	printf ("%d", len);
}*/
