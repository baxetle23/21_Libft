#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nbr;
	int		flag;
	char	*s;

	s = (char *)str;
	nbr = 0;
	flag = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
		flag = ',' - *s++;
	while (ft_isdigit(*s))
	{
		nbr = nbr * 10 + (*s - '0');
		s++;
	}
	return (nbr * flag);
}
