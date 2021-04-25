#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*tmp;
	size_t		i;

	i = 0;
	tmp = (const char *)s;
	while (tmp[i] != '\0' && i < n)
	{
		if (tmp[i] == c)
			return ((void *)&tmp[i]);
		i++;
	}
	if (i < n && tmp[i] == c)
		return ((void *)&tmp[i]);
	return (NULL);
}
