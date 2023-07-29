/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:25:58 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/13 11:44:44 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	while (dest[i] != '\0')
			i++;
	s = 0;
	while (src[s] != '\0' && s < nb)
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[50] = "hello, ";
	char *dest = "World";
	unsigned int nb = 5;
	ft_strncat (src, dest, nb);
	printf ("%s", dest);
	return (0);
}*/
