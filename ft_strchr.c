

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		i++;
		if (!(s[i]) && s[i] != c)
		       return (NULL);	
	}
	return ((char *)&s[i]);
}
