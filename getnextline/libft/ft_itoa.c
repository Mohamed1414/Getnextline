/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:02:45 by mbahstou          #+#    #+#             */
/*   Updated: 2019/12/03 19:45:58 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		negative(long int *n, int *i)
{
	int cont;

	cont = 0;
	if (*n < 0)
	{
		*n = *n * -1;
		cont += 1;
		*i += 1;
	}
	return (cont);
}

char			*ft_itoa(int n)
{
	int				i;
	char			*p;
	int				cont;
	long int		num;
	long int		num2;

	i = 2;
	num = n;
	cont = negative(&num, &i);
	num2 = num;
	while (num /= 10)
		i++;
	if (!(p = malloc((i) * sizeof(char))))
		return (0);
	p[--i] = '\0';
	while (i-- > 0)
	{
		p[i] = num2 % 10 + '0';
		num2 = num2 / 10;
	}
	if (cont > 0)
		p[i + 1] = '-';
	return (p);
}
