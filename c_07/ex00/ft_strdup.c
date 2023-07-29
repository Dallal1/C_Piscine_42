/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdallal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:05:08 by mdallal           #+#    #+#             */
/*   Updated: 2023/07/23 11:12:06 by mdallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dest;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest = (char *)malloc(sizeof(char) * src_len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "algpqw";
	char	*mine = NULL;
	char	str[20] = "daldpakgwlal";

	mine = ft_strdup (src);
	printf ("src = %s\n", mine);
	printf ("src = %ld\n", sizeof(src));
	printf ("str = %s\n", str);
	printf ("str = %ld", sizeof(str));
	return (0);
}*/
