#include "libft.h"

void 	*ft_memmove(void *dest, const void *src, size_t n) {
    char tmp[n];

    if (!dest || !src)
        return NULL;
    ft_memcpy((void *)tmp, src, n);
    ft_memcpy(dest, (void *)tmp, n);
    return dest;
}
