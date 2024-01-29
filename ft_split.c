

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
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**s_list;
	size_t	word_l;
	int	i;

	if (!(s_list = (char **)malloc(ft_c_words(s, c) + 1)) || !s)
		return (NULL);
	i = 0;	
	while (*s)
	{
		while (*s == c)
			s++;
		if(*s)
		{
			if (!ft_strchr(s, c))
				word_l = ft_strlen(s);
			else
				word_l = ft_strchr(s, c) - s;
			s_list[i++] = ft_substr(s, 0, word_l);
			s += word_l;
		}
	}
	return (s_list);
}
