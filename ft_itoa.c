/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:25:44 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/25 15:45:41 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//conta il numero di cifre di un numero intero,
//gestendo correttamente i casi negativi.
static size_t	contatore_lettere(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	else if (n < 10)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

//converte un intero in una stringa di caratteri, allocando dinamicamente la
//memoria necessaria e gestendo il caso speciale del valore minimo di un intero.
char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = contatore_lettere(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i - 1] = n + '0';
	return (str);
}

/*#include <stdio.h>
int main()
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
}*/
