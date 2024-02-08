/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <ggiorni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:27:46 by ggiorni           #+#    #+#             */
/*   Updated: 2024/01/19 15:41:57 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//scrive l'intero n sul file descriptor fd.
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*int main(void)
{
//  stampa una numero sul file descriptor
    int stdout_fd = 1;

    write(stdout_fd, "stampa del numero con ft_putnbr_fd:\n", 39);
    ft_putnbr_fd(12345, stdout_fd);
    write(stdout_fd, "\n\n, 2");
    write(stdout_fd, "stampa del numero negativo con ft_putnbr_fd:\n", 49);
    ft_putnbr_fd(-67890, stdout_fd);
    write(stdout_fd, "\n", 1);
    return (0);
}*/
