/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:48:34 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:49 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Confronta al massimo i primi 'n' byte di due blocchi di memoria 's1' e 's2',
//restituendo un valore negativo, zero o positivo
//a seconda della relazione tra i blocchi.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>

int main()
{
	const char s1[] = "buon natale o anche no..";
	const char s2[] = "buon natale o anche no..";
	size_t n = 10;
	printf("%d\n", ft_memcmp(s1, s2, n));
	return(0);
}*/