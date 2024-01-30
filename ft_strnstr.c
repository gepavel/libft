/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:52:54 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 13:55:37 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		y;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		y = 0;
		while (haystack[i + y] == needle[y] && (i + y) < len)
		{
			y++;
			if (needle[y] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
