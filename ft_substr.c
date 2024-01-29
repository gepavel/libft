

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	if (start > ft_strlen(s))
		return (str);
	i = 0;
	while ((char)s[start] != '\0' && i < len)
		str[i++] = (char)s[start++];
	str[i] = '\0';       
	return (str);
}
