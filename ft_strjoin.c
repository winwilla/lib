/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 20:05:26 by hdean             #+#    #+#             */
/*   Updated: 2019/04/24 23:41:48 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Allocates (with malloc(3)) and returns a “fresh” string ending with '\0', 
 * result of the concatenation of s1 and s2.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;

	if (!(s1 || s2))
		return (NULL);
	if (!s1 && s2)
	{
		if (!(ptr = ft_strnew(ft_strlen(s2))))
			return (NULL);
		ft_strcpy(ptr, s2);
	}
	else if (s1 && !s2)
	{
		if (!(ptr = ft_strnew(ft_strlen(s1))))
			return (NULL);
		ft_strcpy(ptr, s1);
	}
	else
	{
		if (!(ptr = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
		ft_strcat(ptr, s2);
	}
	return (ptr);
}
