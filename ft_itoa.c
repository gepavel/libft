/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:33:13 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/01 20:03:09 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		nb;
	int				count;

	nb = n;
	count = ft_int_len(n);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	str[count--] = '\0';
	if (nb < 0)
		nb *= -1;
	while (count >= 0)
	{
		str[count--] = nb % 10 + 48;
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
