#include "libft.h"

static   size_t ft_words_count(const char *s, char ch);
static   size_t	ft_strsublen(const char *str, char c);

char    **ft_split(const char *s, char ch) {
    char **split;
    size_t len;
    size_t space;

    if (!(split = (char **)malloc(sizeof(char *) * ft_words_count(s, ch) + 1)))
        return NULL;
    space = 0;
    while (*s)
        {
            while (*s == ch)
                s++;
            if (*s)
            {
                len = ft_strsublen(s, ch);
                if ((split[space] = malloc(sizeof(char) * (len + 1))))
                {
                    ft_memcpy(split[space], s, len);
                    split[space][len] = '\0';
                    space++;
                }
                s += len;
            }
        }
        split[space] = 0;
        return (split);
    }

size_t ft_words_count(const char *s, char ch) {
    size_t i;
    size_t flag;
    size_t words_count;

    i = 0;
    flag = 0;
    words_count = 0;
    while (s[i] != '\0') {
        if (s[i] != ch && flag == 0) {
            words_count++;
            flag = 1;
        }
        if (s[i] == ch && flag == 1)
            flag = 0;
        i++;
    }
    return words_count;
}

size_t	ft_strsublen(const char *str, char c)
{
    size_t	counter;

    counter = 0;
    if (!str)
        return (0);
    while ((*str) && (*str != c) && (str++))
        counter++;
    return (counter);
}
