/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:56:02 by hdean             #+#    #+#             */
/*   Updated: 2019/04/26 23:39:40 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Copies no more than n bytes from memory area src to memory area dest, 
 * stopping when the character c is found.
 */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;
	unsigned char	cd;

	cd = (unsigned char)c;
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		if (src_tmp[i] == cd)
		{
			dst_tmp[i] = src_tmp[i];
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
