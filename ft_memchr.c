/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:19:59 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:48 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//cerca la prima occorrenza del byte specificato (c) nei primi n byte
//dell'area di memoria puntata da s. Se trova una corrispondenza, restituisce
//un puntatore a tale posizione nella memoria.
//In caso contrario, restituisce NULL.
//res = risultato occ = occorrenza
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*res;
	unsigned char			occ;

	i = 0;
	res = (const unsigned char *)s;
	occ = (unsigned char)c;
	while (i < n)
	{
		if (res[i] == occ)
			return ((void *)(res + i));
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char s[] = "aiuto sono stanco";
	int c = 's';
	size_t n = 4;
	printf("%p\n", ft_memchr(s, c, n));
	return(0);
}*/
