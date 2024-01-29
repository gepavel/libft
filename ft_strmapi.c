

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	char		*str;
	size_t		s_len;
	unsigned int 	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (!(str = (char *)malloc(s_len + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

