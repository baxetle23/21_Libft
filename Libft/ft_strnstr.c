#include "libft.h"

static size_t   ft_strnlen(char *str, size_t max_size);

char 	*ft_strnstr(const char *big, const char *little, size_t len) {
    size_t i;
    size_t lit_len;

    i = 0;
    if (0 == (lit_len = ft_strnlen((char *)little, len)))
        return (char *)big;
    while (i < len - lit_len) {
        if (big[0] == little[0] && (0 == ft_strncmp(big, little, lit_len)))
            return (char *)big;
        big++;
        i++;
    }
    return NULL;
}


size_t   ft_strnlen(char *str, size_t max_size) {
    return ft_strlen(str) > max_size ? max_size : ft_strlen(str);
}
