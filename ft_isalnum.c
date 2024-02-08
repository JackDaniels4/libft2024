/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:32:30 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:31 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce un valore diverso da zero se il carattere 'c' è una lettera
//dell'alfabeto o un numero, altrimenti restituisce zero.
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	main()
{
	int c = 's';
	printf("%d\n", ft_isalnum(c));
	return(0);
}*/