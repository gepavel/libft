

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t 	i;
	unsigned char *st1;
	unsigned char *st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (st1[i] && st2[i] && st1[i] != st2[i] && i < n)
		i++;
	return ((int)(st1[i] - st2[i]));
}
