/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:19:28 by mbahstou          #+#    #+#             */
/*   Updated: 2019/12/03 19:45:16 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;
	unsigned int	l;

	if (s == 0)
		return (0);
	if (start > len)
		return (ft_strdup(""));
	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	if (!(p = malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
