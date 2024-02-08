/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:28:01 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:55 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//scrive la stringa s sul file descriptor fd,
//seguita da un carattere di nuova riga ("\n").
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int main ()
{
	
	int fd = 1;
	char s[] = "non sono sicuro di quello che faccio";
	ft_putendl_fd(s, fd);
	return(0);
}*/
