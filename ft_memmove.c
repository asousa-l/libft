/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:31:40 by asousa-l          #+#    #+#             */
/*   Updated: 2022/02/14 13:38:45 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	if (dst == src)
		return (dst);
	a = (char *)src;
	b = (char *)dst;
	if (a < b)
	{
		while (len-- > 0)
			*b++ = *a++;
	}
	else
		ft_memcpy(b, a, len);
	return (dst);
}
