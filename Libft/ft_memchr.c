#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n) {
    const char *tmp;

    tmp = s;
    if (!s)
        return NULL;
    while (*tmp || n) {
        if (*tmp == c)
            return (void *)tmp;
        n--;
        tmp++;
    }
    return NULL;
}
