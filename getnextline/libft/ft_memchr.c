/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:05:40 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/25 17:07:03 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	k;

	i = 0;
	p = (unsigned char *)s;
	k = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == k)
			return (p + i);
		i++;
	}
	return (0);
}
