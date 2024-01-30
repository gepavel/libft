/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:11:04 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 14:11:21 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_aux;
	size_t	i;

	b_aux = (char *)b;
	i = 0;
	while (i < len)
		b_aux[i++] = c;
	return (b);
}
