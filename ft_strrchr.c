

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	 size_t		i;

	 i = 0;
	 while (s[i])
	 	 i++;
	 while (s[i] != c && i > -1)
	 {
		 i--;
		 if (i < 0)
			 return (NULL);
	 }
	 return ((char *)&s[i]);
}
