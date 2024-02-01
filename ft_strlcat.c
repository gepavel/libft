/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:28:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/01 18:32:01 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	s_len = ft_strlen(src);
	d_len = ft_strlen((const char *)dst);
	i = 0;
	while (*src != '\0' && (dstsize) > (d_len + i + 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	if (d_len < dstsize)
		return (s_len + d_len);
	return (s_len + dstsize);
}
