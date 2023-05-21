/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:55:09 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/21 14:07:15 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	while (*t)
		t++;
	if ((char)c == '\0')
		return (t);
	t--;
	while (t >= s)
	{
		if (*t == (char)c)
			return (t);
		t--;
	}
	return (NULL);
}
