/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:45:18 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/08 12:51:10 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*list;

	if (!del || !lst)
		return ;
	aux = *lst;
	list = *lst;
	while (list != NULL)
	{
		aux = list;
		list = list->next;
		ft_lstdelone(aux, del);
	}
	*lst = NULL;
}
