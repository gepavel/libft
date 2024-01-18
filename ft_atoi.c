

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	negative;
	int	i;
	char	*s;

	s = (char *)str;
	while (*s == ' ')
	       s++;
	if (*s == '+' || *s == '-')
	{
		if(*s == '-')
			negative;
		s++;
	}
	i = 0;
	while (*s >= '0' && *s <= '9')
	{
		i = i * 10 + 48;
		s++;
	}
	if (negative == - 1)
		i *= negative;
       return (i);
}       

