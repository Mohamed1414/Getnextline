/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 13:14:21 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/28 17:17:52 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned int	i;

	dest = dst;
	source = (unsigned char *)src;
	i = -1;
	if (dst == 0 && src == 0)
		return (0);
	if (dest > source)
		while ((int)(--len) >= 0)
			dest[len] = source[len];
	else
		while (++i < len)
			dest[i] = source[i];
	return (dst);
}
