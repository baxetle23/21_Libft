#include "libft.h"

char    *ft_strmap(const char *s, char (*f)(char)) {
    size_t i;
    char *res;

    i = 0;
    res = ft_strnew(ft_strlen(s));
    if (s != NULL && f != NULL && res != NULL) {
        while (s[i] != '\0') {
            res[i] = f(s[i]);
            i++;
        }
    } else {
        return NULL;
    }
    return res;
}
