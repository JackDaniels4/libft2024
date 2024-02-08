/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:38:02 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:24 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce la versione in minuscolo del carattere 'c',
//se è una lettera dell'alfabeto; altrimenti, restituisce 'c' inalterato.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
int	main()
{
	int c = 'C';
	printf("%d\n", ft_tolower(c));
	return (0);
}*/