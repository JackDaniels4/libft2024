/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:38 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//aggiunge l'elemento new alla fine di una lista concatenata (t_list).
//Se la lista è vuota, imposta il puntatore alla testa (*lst) a new.
//Altrimenti, scorre la lista fino all'ultimo elemento
//e collega new come nuovo ultimo elemento.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
/*int	main()
{
// Aggiunge un nuovo nodo alla fine di una lista concatenata
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");
	
	t_list	*nuova_lista = NULL;
	
	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	printf("Lista prima dell'aggiunta:\n");
	
	t_list	*lista = nuova_lista;
	
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	
	ft_lstadd_back(&nuova_lista, nodo3);
	
	printf("Lista dopo l'aggiunta alla fine:\n");
	
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
