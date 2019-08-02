/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 15:42:34 by hdean             #+#    #+#             */
/*   Updated: 2019/04/30 18:58:36 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. 
 * Each character of the string is initialized at '\0' 
 */

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	if (size + 1 == 0)
		return (NULL);
	if (!(ptr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size + 1)
		ptr[i++] = '\0';
	return (ptr);
}
