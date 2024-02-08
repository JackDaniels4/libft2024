/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:51:50 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:42:02 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Alloca memoria dinamicamente e restituisce un duplicato della stringa 's'.
char	*ft_strdup(const char *s)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i])
		i++;
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	char s[] = "tu sai cosa sto facendo ? bella per te !!";
	printf("%s\n", ft_strdup(src));
	return(0);
}*/
