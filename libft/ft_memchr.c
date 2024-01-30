/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:31:24 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 14:33:00 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		un_c;
	unsigned char		*str;

	str = (unsigned char *)s;
	un_c = (unsigned char)c;
	i = 0;
	while (str[i] && str[i] != un_c && i < n)
	{
		i++;
		if (!str[i] || i == n)
			return (NULL);
	}
	return (&str[i]);
}
