/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:39:49 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:25 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce la versione in maiuscolo del carattere 'c',
//se è una lettera dell'alfabeto; altrimenti, restituisce 'c' inalterato.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int	main()
{
	int c = 'b';
	printf("%d\n", ft_toupper(c));
	return (0);
}*/