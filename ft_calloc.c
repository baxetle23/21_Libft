#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	return (ft_memalloc(count * size));
}
