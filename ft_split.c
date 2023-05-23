/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:21:42 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/23 11:32:14 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**malloc_ret(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**ret;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[0] != c)
			count++;
		else if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	ret = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ret)
		return (NULL);
	ret[count] = NULL;
	return (ret);
}

size_t	word_len(char const *s, char c, size_t i)
{
	size_t	count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	k;
	size_t	len;

	if (!s)
		return (NULL);
	ret = malloc_ret(s, c);
	if (!ret)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		len = 0;
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			len = word_len(s, c, i);
		if (len > 0)
			ret[k++] = ft_substr(s, i, len);
		i++;
	}
	return (ret);
}
