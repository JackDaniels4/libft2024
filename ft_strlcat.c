/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:17:50 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:49:01 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Concatena la stringa src alla fine della stringa dst,
//garantendo che la dimensione totale del risultato non superi size.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	j = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		src_len += size;
	else
		src_len += dest_len;
	while (src[j] != '\0' && (dest_len + 1) < size)
	{
		dst[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dst[dest_len] = '\0';
	return (src_len);
}

/*int	main()
{
	char dest[] = "napoleone";
	char src[] = "napoleone";
	size_t size = 4;
	printf("%zu\n", ft_strlcat(dest, src, size));
	return (0);
}*/
