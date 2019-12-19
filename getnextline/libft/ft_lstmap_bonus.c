/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:04:56 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/29 12:49:41 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*begin;

	if (!lst)
		return (0);
	tmp = lst;
	if (!(begin = ft_lstnew(f(tmp->content))))
		return (0);
	tmp = tmp->next;
	while (tmp)
	{
		if (!(new = ft_lstnew(f(tmp->content))))
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		ft_lstadd_back(&begin, new);
		tmp = tmp->next;
	}
	return (begin);
}
