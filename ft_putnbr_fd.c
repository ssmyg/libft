/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:44:41 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/24 11:33:38 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	write_nbr(int n, int sign, int fd)
{
	char	c;

	if (n / 10 != 0)
		write_nbr(n / 10, sign, fd);
	c = (n % 10) * sign + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		sign = -1;
	}
	write_nbr(n, sign, fd);
}
