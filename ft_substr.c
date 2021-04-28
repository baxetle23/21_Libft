#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	mem_len;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (ft_strlen(s) - start >= len)
		mem_len = len;
	else
		mem_len = ft_strlen(s) - start;
	new_string = ft_strnew(mem_len);
	if (new_string == NULL)
		return (NULL);
	while (s[start] != '\0' && i != len)
		new_string[i++] = s[start++];
	return (new_string);
}
