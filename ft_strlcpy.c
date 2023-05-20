/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:30 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/20 10:29:00 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	if (!dst)
		return (0);
	i = 0;
	while (*(src + i))
	{
		if (i + 1 < dstsize)
			*(dst + i) = *(src + i);
		i++;
	}
	if (i > dstsize - 1)
		*(dst + dstsize - 1) = '\0';
	if (i < dstsize)
		*(dst + i) = '\0';
	return (i);
}
