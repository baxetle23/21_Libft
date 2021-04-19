#include "libft.h"

static char    *ft_strnew(size_t size);
static void    *ft_memalloc(size_t size);

char 	*ft_substr(const char *s, unsigned int start, size_t len) {
    char *new_string;
    size_t i;

    i = 0;
    new_string = ft_strnew(len + 1);
    if (new_string == NULL || start > ft_strlen(s)) {
        return NULL;
    }
    while (s[start] != '\0' && i != len) {
        new_string[i++] = s[start++];
    }
    return new_string;
}

char    *ft_strnew(size_t size) {
    return (char *)ft_memalloc(size + 1);
}

void    *ft_memalloc(size_t size) {
    void *pointer;

    pointer = malloc(size);
    if(pointer == NULL) {
        return pointer;
    }
    ft_bzero(pointer, size);
    return pointer;
}
