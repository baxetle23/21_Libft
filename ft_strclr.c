#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, (sizeof(char) * ft_strlen(s)));
}
