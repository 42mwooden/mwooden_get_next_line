/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwooden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 01:17:58 by mwooden           #+#    #+#             */
/*   Updated: 2016/12/23 05:08:36 by mwooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

typedef struct		s_line
{
	int				fd;
	int				red;
	char			*line;
	struct s_line	*next;
}					t_line;

#endif
