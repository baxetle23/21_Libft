#include "libft.h"

int 	ft_atoi(const char *str) {
    int nbr;
    int flag;
    char *s = (char *)str;

    nbr = 0;
    flag = 1;
    if (*s == '-' || *s == '+' || (*s >= '0' && *s <= '9')){
        if (*s == '-'){
            s++;
            flag = -1;
        }
        if (*s == '+')
            s++;
        while(*s){
            nbr = nbr * 10 + (*s - '0');
            s++;
        }
        return nbr * flag;
    }
    return 0;
}
