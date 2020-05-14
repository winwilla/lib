#include "libft.h"

/* Outputs the char c to the file descriptor fd. */

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
}
