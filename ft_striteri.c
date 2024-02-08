/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:09 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/25 17:02:06 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//void non restituisce niente
//void * restituisce un puntatore ad un array di void
//============================================================
//* e' un operatore che legge quello che
//e' presente in un indirizzo di memoria  dereferenzazione
//============================================================
// passando una stinga e una funzione, applica tale funzione alla stinga stessa
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void my_toupper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int main()
{
	char s[]= "abcd";
	ft_striteri(s, &my_toupper);
	printf("%s\n", s);	
}*/