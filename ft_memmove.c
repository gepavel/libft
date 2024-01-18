

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d_aux;
	unsigned char	*s_aux;
	size_t	i;

	d_aux = (unsigned char *)dest;
	s_aux = (unsigned char *)src;
	i = 0;
	if (d_aux > s_aux)
	{		
		while (i++ < len)
			d_aux[i - 1] = s_aux[i - 1];
	}
	else
		while (len-- > 0)
			*(d_aux++) = *(s_aux++); 
	return (dest);
}
