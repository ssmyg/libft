/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:30 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/31 13:49:08 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (*(src + i))
	{
		if (i + 1 < dstsize)
			*(dst + i) = *(src + i);
		i++;
	}
	if (i + 1 > dstsize)
		*(dst + dstsize - 1) = '\0';
	if (i < dstsize)
		*(dst + i) = '\0';
	return (i);
}
