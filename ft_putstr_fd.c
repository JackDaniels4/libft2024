/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:26 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:58 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//scrive la stringa s sul file descriptor fd. Prima di effettuare la scrittura,
//verifica se il puntatore alla stringa è diverso da NULL. 
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int main ()
{
	
	int fd = 1;
	char s[] = "la disperazione non basta mai";
	ft_putstr_fd(s, fd);
	return(0);
}*/