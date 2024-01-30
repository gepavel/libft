/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:47:24 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 15:43:33 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = ft_memset(str, 0, len);
		return (str);
	}
	i = 0;
	while (s[start] && i < len)
		str[i++] = (char)s[start++];
	str[i] = '\0';
	return (str);
}
