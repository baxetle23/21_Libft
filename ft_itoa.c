#include "libft.h"

char	*ft_itoa(int n)
{
	char			*string;
	char			tmp[12];
	char			*tmp_pointer;
	size_t			i;
	unsigned int	value;

	i = 0;
	tmp_pointer = tmp;
	if (n < 0)
		value = n * -1;
	else
		value = n;
	while (value || tmp == tmp_pointer)
	{
		*tmp_pointer++ = value % 10 + '0';
		value /= 10;
	}
	if (n < 0)
		*tmp_pointer++ = '-';
	string = ft_strnew((size_t)(tmp_pointer - tmp));
	if (!(string))
		return (NULL);
	while (tmp_pointer != tmp)
		string[i++] = *--tmp_pointer;
	return (string);
}
