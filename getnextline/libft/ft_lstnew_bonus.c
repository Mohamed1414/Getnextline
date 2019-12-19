/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:45:04 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/28 18:09:35 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*ptr;

	if (!(ptr = malloc(sizeof(t_list))))
		return (0);
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}
