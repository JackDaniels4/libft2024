/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:40 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//elimina tutti gli elementi di una lista concatenata (t_list), utilizzando
//la funzione di eliminazione del per gestire la memoria associata al contenuto
//di ciascun nodo. Imposta infine il puntatore alla testa della lista (*lst)
//a NULL per indicare che la lista è vuota.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	if (lst == NULL || del == NULL)
		return ;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*void ft_deal(void *content)
{
    free(content);
}
int main()
{
// Dealloca la lista e il suo contenuto
	t_list	*nodo1 = ft_lstnew(ft_strdup("Primo nodo"));
	t_list	*nodo2 = ft_lstnew(ft_strdup("Secondo nodo"));
	t_list	*nodo3 = ft_lstnew(ft_strdup("Terzo nodo"));

	t_list	*nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);

	printf("Lista prima:\n");
	t_list	*lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}

	ft_lstclear(&nuova_lista, ft_deal);

	printf("Lista dopo:\n");
	lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	return (0);
}*/
