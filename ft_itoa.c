

#include "libft.h"

char	*ft_itoa(int n)
{
	char 		*str;
	unsigned int	nb;
	int		count;

	nb = n;
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	if (nb < 0)
		count++;
	if(!(str = malloc(count + 1)))
		return (NULL);
	str[count] = '\0';
	while (count-- > 0)
	{
		str[count] = nb % 10 + 48;
		nb /= 10;
		if (nb == 0 && count-- == 1)
			str[count] = '-';
	}
	return (str);
}
