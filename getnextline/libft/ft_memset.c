/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:16:03 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/25 12:06:21 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*a;
	unsigned int	i;

	i = 0;
	a = str;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
