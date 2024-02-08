/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:46:57 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:21 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Cerca la prima occorrenza della sottostringa 'to_find' nella stringa 'str',
//limitandosi a 'len' caratteri.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (little[a] == 0)
		return ((char *)big);
	while (big[a] && a < len)
	{
		b = 0;
		while (big[a + b] == little[b] && (a + b) < len)
		{
			if (little[b + 1] == '\0')
				return ((char *)big + a);
			b++;
		}
		a++;
	}
	return (NULL);
}
// int	main()
// {
// 	char str[] = "assoluta disperazione";
// 	char str2[] = "d";
// 	unsigned int n = 12;
// 	printf("%s\n", ft_strnstr(str, str2, n));
// 	return (0);
// }
// int	main()
// {
// 	char s1[] = "felpa";
// 	char s2[] = "l";
// 	unsigned int n = 3;
// 	printf("%s\n", ft_strnstr(s1, s2, n));
// 	return (0);
// }
