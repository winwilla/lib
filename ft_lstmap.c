/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <hdean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 22:10:18 by hdean             #+#    #+#             */
/*   Updated: 2019/04/30 19:34:09 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Iterates a list lst and applies the function f to each link to create 
 * a “fresh” list (using malloc(3)) resulting from the successive applications 
 * of f. 
 */

static void		ft_free_lst(t_list *list)
{
	t_list *ptr;

	ptr = list;
	while (ptr != NULL)
	{
		ptr = list->next;
		free(list);
		list = ptr;
	}
	list = NULL;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(ft_lstnew(lst->content, lst->content_size));
	if (!tmp)
		return (NULL);
	new_list = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = f(ft_lstnew(lst->content, lst->content_size))))
		{
			ft_free_lst(new_list);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new_list);
}
