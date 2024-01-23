/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:28:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/23 01:11:50 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = 0;
	while (*src != '\0' && (dstsize - 1) > (d_len + i))
	{
		dst[d_len + i] =  src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	if (d_len > dstsize)
		return (s_len + dstsize);
	return (dstsize - 1);
}
