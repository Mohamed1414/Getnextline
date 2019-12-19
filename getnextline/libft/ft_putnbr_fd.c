/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:44:51 by mbahstou          #+#    #+#             */
/*   Updated: 2019/12/03 19:43:18 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	j;
	char		num;

	j = n;
	if (j < 0)
	{
		write(fd, "-", 1);
		j = j * -1;
	}
	if (j >= 10)
		ft_putnbr_fd(j / 10, fd);
	num = j % 10 + '0';
	write(fd, &num, 1);
}
