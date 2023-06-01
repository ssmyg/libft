/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:06:26 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/06/01 16:27:38 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((len > 0 && !dst && !src))
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(unsigned char *)(dst + len - 1 - i) = *(unsigned char *)(src + len
					- 1 - i);
			i++;
		}
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char *dst = malloc(100);
	char *src = "abc";

printf("%p %p\n",	ft_memmove(dst, "abc", 0),	memmove(dst, "abc", 0));
printf("%p %p\n",	ft_memmove(dst, NULL, 0),	memmove(dst, NULL, 0));
printf("%p %p\n",	ft_memmove(NULL, NULL, 5),	memmove(NULL, NULL, 5));
printf("%p %p\n",	ft_memmove(NULL, NULL, 0),	memmove(NULL, NULL, 0));
printf("%p %p\n",	ft_memmove(NULL, "src", 0),	memmove(NULL, "src", 0));

ft_memmove(NULL, "src", 0);
memmove(NULL, "src", 0);

return 0;
}
