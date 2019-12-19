/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:43:09 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/25 17:59:29 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (!(ptr = malloc(size * count)))
		return (0);
	if (count == 0 || size == 0)
		return (ptr);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
