

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	end = (int)ft_strlen(s1) -1;
	start = 0;
	while (ft_strchr(set, (char)s1[start] && start <= end))
		start++;
	if (start > end)
		return (ft_strdup(&s1[start + end + 1]));
	while (ft_strchr(set, (char)s1[end] && end >= 0))
		end--;
	if(!(str = (char *)malloc(end - start + 2)))
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
		
