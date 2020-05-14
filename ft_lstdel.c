#include "libft.h"

/* 
 * Takes as a parameter the adress of a pointer to a link and frees the memory 
 * of this link and every successors of that link using the functions del and 
 * free(3).  
 */

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		if ((*alst)->next)
			ft_lstdel(&((*alst)->next), del);
		ft_lstdelone(&(*alst), del);
	}
}
