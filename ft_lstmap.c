/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepavel <gepavel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:18:23 by gepavel           #+#    #+#             */
/*   Updated: 2024/02/27 13:58:32 by gepavel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	void	*tmp;

	if (!lst || (!f || !del))
		return (NULL);
	tmp = f(lst->content);
	list = ft_lstnew(tmp);
	if (!list)
		return (del(tmp), NULL);
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst->content);
		new = ft_lstnew(tmp);
		if (!new)
			return (del(tmp), ft_lstclear(&list, del), NULL);
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
