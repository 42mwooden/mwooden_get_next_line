/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwooden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 19:20:03 by mwooden           #+#    #+#             */
/*   Updated: 2016/09/25 19:26:26 by mwooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	i2;

	i2 = 0;
	i = ft_strlen(s1);
	while (s2[i2] != '\0' && i2 < n)
	{
		s1[i++] = s2[i2++];
	}
	s1[i] = '\0';
	return (s1);
}
