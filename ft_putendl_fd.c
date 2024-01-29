

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	while (*str != '\0')
		ft_putchar_fd(*str++, fd);
	ft_putchar_fd('\n', fd);
}
