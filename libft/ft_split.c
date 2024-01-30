/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:06:31 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 20:42:24 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_c_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	printf("count=%d", count);
	return (count);
}

size_t	ft_wordlen(const char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char		**s_list;
	size_t		word_l;
	int			i;

	s_list = (char **)malloc(ft_c_words(s, c) + 1);
	if (!s_list || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_l = ft_strlen(s);
			else
				word_l = ft_wordlen(s, c);
			printf("1-%zu", word_l);
			s_list[i++] = ft_substr(s, 0, word_l + 1);
			s += word_l;
		}
	}
	return (s_list);
}
