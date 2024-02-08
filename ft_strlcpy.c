/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:48:47 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:53:04 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Copia la stringa di origine src nella stringa di destinazione dst
//con una dimensione massima specificata da size. La funzione restituisce
//la lunghezza della stringa di origine,
//senza superare la dimensione massima specificata.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)ft_strlen(src));
}
/*

int	main()
{
	char dest[] = "addio addio";
	char src[] = "addio";
	unsigned int size = 18;
	printf("%d\n", ft_strlcpy(dest, src, size));
	return (0);
}*/