#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*pointer;

	pointer = malloc(size);
	if (pointer == NULL)
		return (pointer);
	ft_bzero(pointer, size);
	return (pointer);
}
