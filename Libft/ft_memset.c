#include "libft.h"

void 	*ft_memset(void *s, int c, size_t n) {
    size_t i = 0;
    char *tmp = s;

    if (!s)
        return NULL;
    while(i < n) {
        tmp[i] = c;
        i++;
    }
    return (s);
}
