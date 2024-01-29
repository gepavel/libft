/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:02:15 by gepavel           #+#    #+#             */
/*   Updated: 2024/01/22 20:02:21 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *str)
{
	int		negative;
	int		i;
	char		*s;

	s = (char *)str;
	while (*s == ' ' || (*s > 8 && *s < 14))
	       s++;
	if (*s == '+' || *s == '-')
	{
		if(*s == '-')
			negative = -1;
		s++;
	}
	i = 0;
	while (*s >= '0' && *s <= '9')
	{
		i = i * 10 + *s - 48;
		s++;
	}
	if (negative == (-1))
		i *= negative;
       return (i);
}       
