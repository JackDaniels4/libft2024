/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:06:11 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:45 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//crea una nuova lista concatenata applicando la funzione f a ciascun elemento
//della lista di input lst. Utilizza la funzione ft_lstnew per creare nuovi nodi
//e ft_lstadd_back per aggiungerli alla nuova lista. Se si verifica un errore
//durante l'allocazione di memoria, la funzione libera la memoria
//precedentemente allocata e restituisce NULL.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	newlist = NULL;
	current = lst;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (current != NULL)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		ft_lstadd_back(&newlist, new_node);
		current = current->next;
		if (new_node == NULL)
		{
			ft_lstclear(&newlist, del);
			free(new_content);
			return (NULL);
		}
	}
	return (newlist);
}
/*void	*ft_mappa_function(void *content)
{
	char	*original = (char *)content;
	char	*duplicate = ft_strdup(original);
	return ((void *)duplicate);
}
void	ft_deal(void *content)
{
	free(content);
}
int main()
{
// Crea una nuova lista basata sull'originale e la dealloca
	char	*str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (1);
	str[0] = 'a';
	str[1] = '\0';
	t_list	*nodo = ft_lstnew(str);
	if (!nodo)
	{
		free(str);
		return (1);
	}
	t_list	*map = ft_lstmap(nodo, &ft_mappa_function, ft_deal);
	printf("%s\n", (char *)nodo->content);
	printf("%s\n", (char *)map->content);
	ft_lstclear(&map, &ft_deal);
	ft_lstclear(&nodo, &ft_deal);
	return (0);
}*/
