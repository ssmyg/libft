/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:42:07 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/23 12:12:26 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_len(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	len;
	int		sign;

	len = count_len(n);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	sign = 1;
	if (n < 0)
	{
		len++;
		sign = -1;
		ret[0] = '-';
	}
	if (n == 0)
		ret[0] = '0';
	while (n)
	{
		ret[len - 1] = '0' + sign * (n % 10);
		n /= 10;
		len--;
	}
	return (ret);
}
