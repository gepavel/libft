/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:06:31 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/27 13:59:06 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_freelist(char **list, int len)
{
	while (len >= 0)
		free (list[len--]);
	return (0);
}

static int	ft_c_words(const char *s, char c)
{
	int		count;
	int		flag;

	count = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s == c)
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

static size_t	ft_wordlen(const char *s, char c)
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

static int	ft_split_do(char **s_list, const char *s, char c)
{
	int			i;
	int			j;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			s_list[i] = malloc(ft_wordlen(s, c) + 1);
			if (!s_list[i])
				return (i);
			j = 0;
			while (*s && *s != c)
				s_list[i][j++] = (char)*s++;
			s_list[i++][j] = '\0';
		}
	}
	s_list[i] = 0;
	return (-1);
}

char	**ft_split(const char *s, char c)
{
	char	**s_list;
	int		i;

	if (!s)
		return (NULL);
	s_list = (char **)malloc((ft_c_words(s, c) + 1) * sizeof(char **));
	if (!s_list)
		return (NULL);
	i = ft_split_do(s_list, s, c);
	if (i != -1)
	{
		ft_freelist(s_list, i);
		free (s_list);
		return (0);
	}
	return (s_list);
}
