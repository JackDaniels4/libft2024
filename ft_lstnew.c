/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:46 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//crea un nuovo nodo di lista (t_list) con il contenuto fornito come argomento.
//Alloca memoria per il nuovo nodo, assegna il contenuto e imposta il puntatore
//al nodo successivo a NULL.
//Restituisce un puntatore al nuovo nodo appena creato.
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
    // Creazione di un nuovo nodo con il contenuto ""
    t_list *node = ft_lstnew("Cosa sto facendo?!");

    // Verifica se la creazione del nodo ha avuto successo
    if (node != NULL) 
    {
        // Stampa il contenuto del nodo
        printf("Contenuto del nodo: %s\n", (char *)node->content);

        // Deallocazione della memoria del nodo
        free(node);
    }
    else 
    {
        // Stampa un messaggio in caso di errore nella creazione del nodo
        printf("Errore nella creazione del nodo.\n");
    }

    return 0;
}*/
