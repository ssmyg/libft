/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:13:05 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/20 22:23:01 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	char	*orig_needle;
	size_t	i;

	if (!haystack)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	ret = NULL;
	orig_needle = (char *)needle;
	i = 0;
	while (*haystack && i < len)
	{
		if (*haystack == *needle)
		{
			if (needle == orig_needle)
				ret = (char *)haystack;
			needle++;
			if (*needle == '\0')
				return (ret);
		}
		else
			needle = orig_needle;
		haystack++;
		i++;
	}
	return (NULL);
}
