#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = ft_strnew(ft_strlen(s));
	if (res != NULL)
	{
		while (s[i] != '\0')
		{
			res[i] = f(i, s[i]);
			i++;
		}
	}
	else
		return (NULL);
	return (res);
}
