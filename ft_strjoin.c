#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*new_string;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	new_string = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_string == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	return (new_string);
}
