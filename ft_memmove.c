/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:06:13 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:53 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copia n byte dall'area di memoria puntata da src
//all'area di memoria puntata da dest.
//Utilizza un approccio differente a seconda della direzione della copia
//(da sinistra a destra o da destra a sinistra). Restituisce un puntatore
//all'area di memoria di destinazione.
//Se sia src che dest sono NULL, la funzione restituisce NULL.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cpd;
	const char	*cps;

	cpd = (char *)dest;
	cps = (const char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (cpd > cps)
	{
		while (n--)
			cpd[n] = cps[n];
	}
	else
	{
		while (n--)
			*cpd++ = *cps++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*src = "bella";
	char	dest[19] = "bhooo ciao";
	size_t	n;

	ft_memmove(dest, src, 5);
	printf("Copia:  %s", dest);
}*/
