#include "libft.h"

char 	*ft_strchr(const char *s, int c) {
    return (char *)ft_memchr((void *)s, c, ft_strlen(s));
}
