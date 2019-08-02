/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:07:22 by hdean             #+#    #+#             */
/*   Updated: 2019/04/21 19:10:38 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Lexicographical comparison between s1 and s2 up to n characters or until 
 * a '\0' is reached. If the 2 strings are identical, the function returns 1, 
 * or 0 otherwise.
 */

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2 || ft_strncmp(s1, s2, n))
		return (0);
	return (1);
}
