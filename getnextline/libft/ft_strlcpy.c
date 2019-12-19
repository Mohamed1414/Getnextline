/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:07:23 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/25 17:33:07 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	o;
	char			*ptr;

	i = 0;
	o = 0;
	ptr = (char *)src;
	if (dst == 0 || src == 0)
		return (0);
	while (ptr[o])
		o++;
	if (dstsize == 0)
		return (o);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = ptr[i];
		i++;
	}
	dst[i] = '\0';
	return (o);
}
