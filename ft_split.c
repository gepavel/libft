/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:06:31 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/01 15:11:01 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_c_words(const char *s, char c)
{
	int		count;
	int		i;
	int		flag;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = 0;
		else if (flag == 0)
		{
			count++;
			flag = 1;
		}
		s++;
	}
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
			while (*s && *s != c)
				s_list[i][j++] = (char)*s++;
			s_list[i++][j] = '\0';
		}
	}
	s_list[i] = 0;
	return (s_list);
}
