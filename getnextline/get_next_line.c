/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 12:14:16 by mbahstou          #+#    #+#             */
/*   Updated: 2019/12/23 19:00:09 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_remove(char *p, int len)
{
	char	*newstr;
	int 	i;

	i = 0;
	if(!(newstr = malloc((ft_strlen(p) - len) * sizeof(char))))
		return (0);
	while (p[len])
		newstr[i++] = p[len++ + 1];
	return(newstr);
}

int		get_next_line(int fd, char **line)
{
	int 		lectura;
	char		buff[BUFFER_SIZE + 1];
	static char	*p[4096]; // cada vez que se lee algo se almacena aqui.
	size_t		i;

	i = 0;
	while ((lectura = read (fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[lectura] = '\0';
		if(!p[fd]) // para la primera vez que lee, si no existe entra en el if y le asigna espacio.
			p[fd] = ft_strdup(buff);
		else
			p[fd] = ft_strjoin(p[fd], buff); // una vez ya creado concatena lo siguiente que lee con lo que había leido anteriormente.
		if (ft_strchr(p[fd], '\n') != 0) // si el valor de retorno no es NULL significa que ha encontrado el salto de linea.
		{
			while (p[fd][i] != '\n') // se coloca apuntando al salto de linea encontrado.
				i++;
			*line = ft_substr(p[fd], 0, i); // copia en line hasta el salto de linea.
			//ft_bzero(p[fd], i + 1); // elimina el contenido de p[fd] hasta el salto de linea, este incluido.
			p[fd] = ft_remove(p[fd], i);
			return (1);
		}
	}
	return(0);
}

int main()
{
	int fd;
	char *line;
	
	fd = open("hola.txt", O_RDONLY);
	get_next_line(fd, &line); // le pasas la dirección de line.
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	close (fd);
	return (0);
}
