/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpivovar <dpivovar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-22 13:37:29 by dpivovar          #+#    #+#             */
/*   Updated: 2026-11-22 13:37:29 by dpivovar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * (-1);
	}
	if (nbr >= 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
/*
int main(void)
{
	int	n;

	n = 1234;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);

	n = -1234;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);

	n = 0;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);

	n = 2147483647;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);

	n = -2147483648;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/