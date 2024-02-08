/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:26:40 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:01 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce un puntatore alla prima occorrenza del carattere 'c'
//nella stringa 's', o NULL se il carattere non è presente.
char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*str != (unsigned char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return ((char *)str);
}

/*int main()
{
	const char s[] = "non so cosa pensare";
	int c = 'c';
	printf("%s\n", ft_strchr(s, c));
	return(0);
}*/
