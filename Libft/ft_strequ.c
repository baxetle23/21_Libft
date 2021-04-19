#include "libft.h"

int ft_strequ(const char *s1, const char *s2) {
    size_t i;

    i = 0;
    if (s1 == NULL || s2 == NULL) {
        return 0;
    }
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }
    return (s2[i] == '\0' ? 1 : 0);
}
