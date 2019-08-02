/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:54:13 by hdean             #+#    #+#             */
/*   Updated: 2019/04/29 23:02:30 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets every character of the string to the value '\0' */

void	ft_strclr(char *s)
{
	if (s)
	{
		ft_memset(s, '\0', ft_strlen(s));
	}
}
