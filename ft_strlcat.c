

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	i;

	d_len = ft_strlen(dst);
	i = 0;
	while (*src != '\0' && 0 < dstsize - d_len - 1 - i)
	{
		dst[d_len + i] =  src[i];
		i++;
	}
	if (i + d_len  > dstsize)
		return (i + d_len);
	return (dstsize);
}
