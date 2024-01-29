/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:28:00 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/22 22:35:07 by gepavel          ###   ########.fr       */
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
	if (!dest || !src)
		return (dest);
	 if (d_aux > s_aux)
	 {
		 while (len-- > 0)
	 		 d_aux[len] = s_aux[len];
	 }
	else
	{
		while (i < len)
		{
			d_aux[i] = s_aux[i];
        	i++;
		}
    }
	return (dest);
}
