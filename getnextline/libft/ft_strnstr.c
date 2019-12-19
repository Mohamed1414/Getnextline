/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:39:08 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/29 12:55:40 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		if (hay[i] == needle[j])
		{
			while (hay[i + j] == needle[j] && (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)hay + i);
			}
		}
		i++;
	}
	return (0);
}
