


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char		un_c;
	unsigned char		*str;

	str = (unsigned char *)s;
	un_c = (unsigned char)c;
	i = 0;
	while (str[i] && str[i] != un_c && i < n)
	{
		i++;
		if (!str[i] || i == n)
			return ((void *)NULL);
	}
	return (&str[i]);
}
