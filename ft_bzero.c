/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:08:47 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:28 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//imposta a zero i primi n byte dell'area di memoria puntata da s.
//Utilizza un puntatore non tipizzato per manipolare i byte
//e un ciclo while per impostare ciascun byte a zero.
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}
/*
int	main()
{
	size_t n = 7;
	char s[] = "addio";
	ft_bzero(s, n);
	printf("%d%d\n", s[1], s[3]);
	return(0);
}*/