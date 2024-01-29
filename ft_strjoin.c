
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*str;
	size_t		s1_l;
	size_t		s2_l;
	size_t		i;
	size_t		j;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	if(!(str = (char *)malloc(s1_l + s2_l + 1)))
		return (NULL);
	i = 0;
	while ((char)s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while ((char)s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
