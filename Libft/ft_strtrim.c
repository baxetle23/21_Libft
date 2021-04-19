#include "libft.h"


static char    check_set(const char *set, char ch);
static char    *ft_strnew(size_t size);
static void    *ft_memalloc(size_t size);

char 	*ft_strtrim(const char *s, const char *set) {
    size_t len;
    size_t i;
    size_t j;
    char *new_string;

    len = 0;
    i = 0;
    while (s[i] != '\0') {
        if (!check_set(set, s[i]))
            len++;
        i++;
    }
    new_string = ft_strnew(len);
    if (new_string == NULL)
        return NULL;
    i = 0;
    j = 0;
    while (s[i] != '\0') {
        if (!check_set(set, s[i]))
            new_string[j++] = s[i];
        i++;
    }
    return new_string;
}

char    check_set(const char *set, char ch) {
    size_t i;

    i = 0;
    while (set[i] != '\0') {
        if (set[i] == ch) {
            return 1;
        }
        i++;
    }
    return 0;
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

