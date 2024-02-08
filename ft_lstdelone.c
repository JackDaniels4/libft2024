/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:41 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//elimina un singolo elemento di una lista concatenata (t_list).
//Utilizza la funzione di eliminazione del per gestire la memoria associata
//al contenuto del nodo e poi libera la memoria del nodo stesso.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*void	ft_deal(void *content)
{
	free(content);
}
int main()
{
// Cancella un nodo nella lista
	char	*str = (char *)malloc(sizeof(char) * 2);
	if (str == NULL)
		return (1);
	str[0] = 'a';
	str[1] = '\0';
	t_list	*nodo = ft_lstnew(str);

	if (nodo == NULL)
	{
		free(nodo);
		return (1);
	}
	printf("%s\n", (char *)nodo->content);
	ft_lstdelone(nodo, ft_deal);
	return (0);
}*/
