/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/30 14:59:32 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//restituisce un puntatore all'ultimo elemento di una lista concatenata
//(t_list). Scorre la lista fino all'ultimo elemento e restituisce il puntatore
//a tale elemento. Se la lista è vuota, restituisce NULL.
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main()
{
// Restituisce il puntatore all'ultimo nodo di una lista concatenata
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");

	t_list *nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);

	t_list *ultimo_nodo = ft_lstlast(nuova_lista);

	if (ultimo_nodo != NULL)
		printf("Ultimo nodo: %s\n", (char *)ultimo_nodo->content);
	else
		printf("La lista è vuota.\n");
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
