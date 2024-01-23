

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b_aux;
	size_t	i;
	
	b_aux = (char *)b;
	i = 0;
	while (i < len)
		b_aux[i++] = c;
	return (b);
}
