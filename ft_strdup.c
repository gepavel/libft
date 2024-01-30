/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:04:35 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 14:04:39 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	size_t		s_len;
	size_t		i;

	i = 0;
	s_len = ft_strlen(s1) + 1;
	str = (char *)malloc(s_len);
	if (!str)
		return (NULL);
	while (i < s_len - 1)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
