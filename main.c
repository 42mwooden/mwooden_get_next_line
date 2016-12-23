/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwooden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 15:57:03 by mwooden           #+#    #+#             */
/*   Updated: 2016/12/23 07:39:58 by mwooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	*line;
	char	*line2;
	int		status = 0;

	line = NULL;
	line2 = NULL;
	fd = argc;
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	status = 1;
	int		status2 = 0;
	while (status == 1 || status2 == 1)
	{
		status = get_next_line(fd, &line);
		if (status == 1)
			printf("File 1: %s\n", line);
		status2 = get_next_line(fd2, &line2);
		if (status2 == 1)
			printf("File 2: %s\n", line2);
	}
	close(fd);
	status = get_next_line(fd, &line);
	printf("%i\n", status);
}
