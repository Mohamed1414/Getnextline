/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:27:41 by mbahstou          #+#    #+#             */
/*   Updated: 2019/12/03 19:48:51 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		check(char const *set, char a)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		cont;

	i = -1;
	start = 0;
	cont = 1;
	if (s1 == 0)
		return (0);
	while (s1[++i] != '\0')
		if (cont == 1 && check(set, s1[i]) == 1)
			start++;
		else
			cont = 0;
	i--;
	while (cont == 0)
	{
		if (cont == 0 && check(set, s1[i]) == 1)
			i--;
		else
			cont = 1;
	}
	return (ft_substr(s1, start, i - start + 1));
}
