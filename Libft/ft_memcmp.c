#include "libft.h"

int 	ft_memcmp(const void *s1, const void *s2, size_t n) {
    char    *tmp1;
    char    *tmp2;

    tmp1 = (char *)s1;
    tmp2 = (char *)s2;
    while (n) {
        if(tmp1 != tmp2)
            return (*tmp1 - *tmp2);
    }
    return (0);
}

