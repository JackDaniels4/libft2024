/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:01:42 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:20 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Restituisce un puntatore all'ultima occorrenza del carattere 'c'
//nella stringa 's', o NULL se il carattere non è presente.
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;

	len = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	while (len > 0)
	{
		len--;
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
	}
	return (NULL);
}

/*int main(void)
{
	const char	*string = "mi piace tuffarmi nell'acido a candela";
	int	character = 'c';

	char	*result = ft_strrchr(string, character);
	printf("%s", result);
}

int	main()
{
	const char s[] = "ma cosa sto facendo ?";
	int c = 's';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/
