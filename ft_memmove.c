/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:28:00 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/01 12:24:04 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d_aux;
	unsigned char	*s_aux;
	size_t			i;

	d_aux = (unsigned char *)dest;
	s_aux = (unsigned char *)src;
	i = 0;
	if (!src && !dest && len > 0)
		return (NULL);
	if (d_aux > s_aux)
	{
		while (len-- > 0)
			d_aux[len] = s_aux[len];
	}
	else if (d_aux <= s_aux)
	{
		while (i < len)
		{
			d_aux[i] = s_aux[i];
			i++;
		}
	}
	return (dest);
}
