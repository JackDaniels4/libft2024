/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:39 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//aggiunge l'elemento new all'inizio di una lista concatenata (t_list).
//Imposta il campo next di new al puntatore alla testa della lista (*lst)
//e poi imposta il puntatore alla testa a new.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
// Aggiunge un nuovo nodo all'inizio di una lista concatenata
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");

	t_list *nuova_lista = NULL;

	ft_lstadd_front(&nuova_lista, nodo3);
	ft_lstadd_front(&nuova_lista, nodo2);
	
	t_list	*lista = nuova_lista;
	
	printf("Lista prima:\n");
	
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	
	ft_lstadd_front(&nuova_lista, nodo1);

	printf("Lista dopo l'aggiunta alla testa:\n");
	
	while (nuova_lista != NULL)
	{
		printf("%s\n", (char *)nuova_lista->content);
		nuova_lista = nuova_lista->next;
	}
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
