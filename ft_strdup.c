
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s1) + 1;
	if(!(str = (char *)malloc(s_len)))
		return (NULL);
	while (i < s_len - 1)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
