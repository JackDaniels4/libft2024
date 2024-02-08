/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:16 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:18 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Applica la funzione 'f' a ciascun carattere della stringa 's',
//restituendo una nuova stringa.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char my_toupper(unsigned int i, char c)
{
	return (ft_toupper(c));
}
int main()
{
	char const s[]= "abcdefg";
	char *str = ft_strmapi(s, my_toupper);
	printf("%s\n", str);
	
}*/