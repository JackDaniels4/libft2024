/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:43 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//applica la funzione f a ciascun elemento di una lista concatenata (t_list).
//Scorre la lista e applica la funzione f al contenuto di ciascun nodo.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void ft_print_function(void *content)
{
    printf("Contenuto: %s\n", (char *)content);
}
int main()
{
// Stampa il contenuto dei nodi appartenenti a una lista concatenata
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");

	t_list *nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);

	ft_lstiter(nuova_lista, ft_print_function);
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
