/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susumuyagi <susumuyagi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:49:00 by susumuyagi        #+#    #+#             */
/*   Updated: 2023/05/18 17:00:21 by susumuyagi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
//void	*calloc(size_t count, size_t size); // memset実装後に作成

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

#endif
