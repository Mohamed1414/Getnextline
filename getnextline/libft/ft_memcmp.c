/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:17:40 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/26 11:50:23 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	*j;

	i = 0;
	p = (unsigned char *)s1;
	j = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != j[i])
			return (p[i] - j[i]);
		i++;
	}
	return (0);
}
