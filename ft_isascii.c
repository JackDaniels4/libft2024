/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:31:49 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:33 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce un valore diverso da zero se il valore di 'c' è un
//carattere ASCII valido (0-127), altrimenti restituisce zero.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int c = 149;
	printf("%d\n", ft_isascii(c));
	return (0);
}*/