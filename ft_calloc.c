/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:09:02 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:01:37 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//alloca memoria per un array di dimensioni nmemb e size, inizializzando
//tutti i byte a zero utilizzando la funzione ft_bzero.
//Restituisce un puntatore alla memoria allocata.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, size * nmemb);
	return (p);
}
/*
#include <stdio.h>

int	main()
{
	size_t count = 5;
	size_t size = 1;
	printf("%p\n", ft_calloc(5,1));
	return (0);
}*/