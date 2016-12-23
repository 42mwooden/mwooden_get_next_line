/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwooden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 03:52:31 by mwooden           #+#    #+#             */
/*   Updated: 2016/12/07 03:54:11 by mwooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*my_realloc(void *ptr, size_t size, size_t diff)
{
	void	*ret;

	ret = malloc(size);
	ft_memcpy(ret, ptr, size - diff);
	free(ptr);
	return (ret);
}

