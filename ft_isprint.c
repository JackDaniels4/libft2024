/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:13:17 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:34 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce un valore diverso da zero se il carattere 'c' è stampabile,
//ossia se ha una rappresentazione visibile, altrimenti restituisce zero.
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int c = '\v';
	printf("%d\n", ft_isprint(c));
	return (0);
}*/