/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:38 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:54 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// fd ( file descriptor ) (tipo di fd = file, pipe, socket aperto su di un
// processo, che effettua operazioni di imput/output).
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main ()
{
	
	int fd = 1;
	char c = 'p';
	ft_putchar_fd(c, fd);
	return(0);
}*/