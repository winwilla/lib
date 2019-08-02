/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:06:03 by hdean             #+#    #+#             */
/*   Updated: 2019/04/26 23:46:49 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Scans the initial n bytes of the memory area pointed to by s for the first 
 * instance of c. 
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	sr;

	sr = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == sr)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
