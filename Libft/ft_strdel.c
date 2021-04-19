#include "libft.h"

void    ft_strdel(char **ap) {
    void **tmp = (void **)ap;
    ft_memdel(tmp);
}
