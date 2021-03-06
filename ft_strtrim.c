#include "libft.h"

static char	check_set(const char *set, char ch);

char	*ft_strtrim(const char *s, const char *set)
{
	int		i;
	int		len;
	int		begin;
	int		end;
	char	*new_string;

	if (!s || !set)
		return (NULL);
	len = ft_strlen(s);
	begin = 0;
	while (s[begin] != '\0' && check_set(set, s[begin]))
		begin++;
	if (begin == len)
		return (ft_strnew(0));
	end = len - 1;
	while (end != begin && check_set(set, s[end]))
		end--;
	new_string = ft_strnew(end - begin + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (begin <= end)
		new_string[i++] = s[begin++];
	return (new_string);
}

char	check_set(const char *set, char ch)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
