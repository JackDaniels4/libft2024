/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:44 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/30 12:16:54 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce una copia della stringa 's1', rimuovendo i caratteri
//presenti nella stringa 'set' all'inizio e alla fine.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int) s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, (int) s1[end]) && start < end)
		end--;
	str = ft_calloc(end - start + 2, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1 + start, end - start + 2);
	return (str);
}
/*
int	main()
{
	const char s1[]="ciao ciao marcella";
	const char set[]="c""a";
	printf("%s\n", ft_strtrim(s1, set));
	return(0);
}*/