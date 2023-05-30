/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:56:56 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/30 16:48:59 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	while (i < n)
	{
		ret = (int)(*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		if (ret)
			return (ret);
		i++;
	}
	return (0);
}
