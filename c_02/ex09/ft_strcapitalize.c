/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitaliz.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:39:21 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/14 20:23:01 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_lowarcas(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	i = 0;
	w = 1;
	ft_lowarcas(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (w == 1)
				str[i] -= 32;
			w = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			w = 0;
		else
			w = 1;
		i++;
	}
	return (str);
}

/*
int	main()
{
	char str[] = "mKale, dllAl 42Said, eMd-kale; swc+dme";
	ft_strcapitalize(str);
	printf ("%s", str);
	return (0);
}*/
