/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:06:31 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 22:20:32 by gepavel          ###   ########.fr       */
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
	printf("count=%d:\n", count);
	return (count);
}

size_t	ft_wordlen(const char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char		**s_list;
	int			i;
	int			j;

	s_list = (char **)malloc((ft_c_words(s, c) + 1) * sizeof(char **));
	if (!s_list || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			s_list[i] = malloc(ft_wordlen(s, c) + 1);
			j = 0;
			while (*s != '\0' && *s != c) 
				s_list[i][j++] = (char)*s++;
			s_list[i++][j++] = '\0';
		}
	}
	s_list[i][0] = '\0';
	return (s_list);
}
