/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:33:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/30 14:34:47 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				count;

	nb = n;
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	if (nb < 0)
		count++;
	str = malloc(count + 1);
	if (!str)
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
