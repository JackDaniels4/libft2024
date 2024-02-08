/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:32 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/30 16:34:58 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// calcola la lunghezza della sottostringa di str da un certo punto
//fino al carattere c o alla fine della stringa.
static int	ft_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

// conta il numero di "parole" nella stringa s
//utilizzando il carattere c come delimitatore.
static int	ft_size(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

// libera la memoria allocata per l'array di stringhe split e restituisce NULL.
static char	**ft_my_free_split(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

//alloca memoria per l'array di stringhe dest, poi cicla attraverso la stringa
//originale s individuando le "parole" separate dal carattere c e allocando
//memoria per ciascuna parola. Successivamente, copia la parola nella posizione
//corrispondente dell'array. Infine, restituisce l'array di stringhe risultante.
//while (*s_cpy = un operatore che legge dentro l'indirizzo di memoria.
char	**ft_split(char const *s, char c)
{
	int		j;
	char	*s_cpy;
	char	**dest;

	j = 0;
	s_cpy = (char *)s;
	if (s == NULL)
		return (NULL);
	dest = (char **)malloc((ft_size(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (j < ft_size(s, c) && s_cpy)
	{
		while (*s_cpy == c)
			s_cpy++;
		dest[j] = malloc((ft_len(s_cpy, c) + 1) * sizeof(char));
		if (!dest[j])
			return (ft_my_free_split(dest));
		ft_strlcpy(dest[j], s_cpy, ft_len(s_cpy, c) + 1);
		s_cpy += ft_len(s_cpy, c) + 1;
		j++;
	}
	dest[j] = NULL;
	return (dest);
}
/*int	main()
{
// Divide una stringa passata, in più stringhe, allocando memoria per esse
// La divide grazie a un char passato
	char	str[] = "non,penso;di,sapere;questa,roba";
	char	**risultato = ft_split(str, ',');
	int	i = 0;
	while (risultato[i] != NULL)
	{
		printf("%s\n", risultato[i]);
		free(risultato[i]);
		i++;
	}
	free(risultato);
	return (0);
}*/
