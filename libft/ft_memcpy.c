/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:29:28 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 14:31:00 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d_aux;
	char		*s_aux;
	size_t		i;

	d_aux = (char *)dest;
	s_aux = (char *)src;
	i = 0;
	while (i < n)
	{
		d_aux[i] = s_aux[i];
		i++;
	}
	return (dest);
}
