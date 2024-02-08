/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:03:22 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:51 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copia i primi n byte dall'area di memoria puntata da src all'area di memoria
//puntata da dest. Utilizza un ciclo while per copiare byte per byte e
//restituisce un puntatore all'area di memoria di destinazione.
//Se sia src che dest sono NULL, la funzione restituisce NULL.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cpd;
	char	*cps;

	i = 0;
	cpd = (char *)dest;
	cps = (char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		cpd[i] = cps[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char dest[] = "suca";
	const char src[] = "aaaaaa";
	size_t n = 4;
	printf("%p\n", ft_memcpy(dest, src, n));
	return(0);
}*/