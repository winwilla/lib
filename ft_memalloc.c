#include "libft.h"

/* 
 * Allocates (with malloc(3)) and returns a “fresh” memory area. 
 * The memory allocated is initialized to 0 
 */

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
