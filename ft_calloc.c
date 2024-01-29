

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	if (!(ptr = (void *)malloc(count * size)))
		return (NULL);
	return (ptr);
}
