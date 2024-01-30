/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:31 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 18:14:22 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	end = (int)ft_strlen(s1) - 1;
	start = 0;
	while (ft_strchr(set, (char)s1[start]) && (char)s1[start] != '\0')
		start++;
	if (start > end)
		return (ft_strdup(&s1[start]));
	while (ft_strchr(set, (char)s1[end]) && end >= 0)
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
