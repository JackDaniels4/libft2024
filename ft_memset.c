/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:23:43 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:52 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//imposta i primi n byte dell'area di memoria puntata da s al valore
//specificato (c). Utilizza un ciclo while per assegnare il valore c a ciascun
//byte dell'area di memoria e restituisce un puntatore
//all'area di memoria modificata.
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *)s;
	while (i < n)
	{
		*(pointer + i++) = (unsigned char)c;
	}
	return (s);
}

/*int main()
{
	char s[] = "ciao non ho voglia";
	int c = 'a';
	size_t n = 4;
	printf("%p\n", ft_memset(s, c, n)); //%s per controllo
	return(0);
}*/
