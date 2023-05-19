/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:06:26 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/18 20:07:11 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + len - 1 - i) = *(char *)(src + len - 1 - i);
			i++;
		}
	}
	return (dst);
}
