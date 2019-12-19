/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:43:01 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/25 12:34:45 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*j;
	unsigned int	i;

	p = (unsigned char *)dst;
	j = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = j[i];
		if (p[i] == (unsigned char)c && p[i] != '\0')
			return (p + i + 1);
		i++;
	}
	return (0);
}
