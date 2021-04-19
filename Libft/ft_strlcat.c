#include "libft.h"

size_t 	ft_strlcat(char *dest, const char *src, size_t n) {
    size_t i;
    size_t j;
    size_t res_size;

    res_size = strlen(dest) + strlen(src);
    i = strlen(dest);
    j = 0;
    if (i < n - 1 && n > 0) {
        while(src[j] && j < n - 1)
            dest[i++] = src[j++];
        dest[i]= '\0';
    }

    return res_size;
}
