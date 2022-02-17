/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:55:20 by asousa-l          #+#    #+#             */
/*   Updated: 2022/02/14 14:23:35 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sc;
	size_t	dc;

	sc = ft_strlen(src);
	if (dstsize == 0)
		return (sc);
	dc = 0;
	while (dst[dc] != '\0')
		dc++;
	i = 0;
	while (src[i] != '\0' && dc + i < (dstsize -1))
	{
		dst[i + dc] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[dc + i] = '\0';
	if (dc > dstsize)
		return (sc + dstsize);
	return (dc + sc);
}
