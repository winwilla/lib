/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:02:19 by hdean             #+#    #+#             */
/*   Updated: 2019/04/21 19:09:57 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Lexicographical comparison between s1 and s2. If the 2 strings are identical 
 * the function returns 1, or 0 otherwise.
 */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2 || ft_strcmp(s1, s2))
		return (0);
	return (1);
}
