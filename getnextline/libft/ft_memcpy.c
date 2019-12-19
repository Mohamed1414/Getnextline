/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:39:27 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/29 14:53:35 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	*t;

	p = dst;
	t = (unsigned char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		p[i] = t[i];
		i++;
	}
	return (dst);
}
