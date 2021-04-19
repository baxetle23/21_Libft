#include "libft.h"

void    ft_strclr(char *s) {
    if (s != NULL) {
            ft_bzero((void *)s, ft_strlen(s));
    }
}
