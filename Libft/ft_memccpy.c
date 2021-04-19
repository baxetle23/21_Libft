#include "libft.h"

void 	*ft_memccpy(void *dest, const void *src, int c, size_t n) {
    size_t i;
    char *tmp_dest;
    const char *tmp_src;

    if (!dest || !src)
        return NULL;
    tmp_dest = (char *)dest;
    tmp_src = (const char *)src;
    i = 0;
    while (i < n) {
        tmp_dest[i] = tmp_src[i];
        if (tmp_dest[i] == c)
            break;
        i++;

    }
    return dest;
}
