

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d_aux;
	char		*s_aux;
	size_t		i;

	d_aux = (char *)dest;
	s_aux = (char *)src;
	i = 0;
	while(i < n)
	{
	       d_aux[i] = s_aux[i];
	       i++;
	}
	return (dest);	
}
