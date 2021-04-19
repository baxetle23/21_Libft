#include <stdio.h>
#include "libft.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

void Test_strsub() {
    printf("%s\n", ft_substr("ABCDE", 0, 78));
}

void Test_strjoin() {
    printf("%s\n", ft_strjoin(" ", ""));
}

void Test_strtrim() {
    printf("%s\n", ft_strtrim("ABCDE", "AAAE"));
}

void Test_split() {
    char months[] = ",,JAN,FEB,,,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

        printf("months=[%s]\n\n", months);

        tokens = ft_split(months, ',');

        if (tokens)
        {
            int i;
            for (i = 0; *(tokens + i); i++)
            {
                printf("month=[%s]\n", *(tokens + i));
                free(*(tokens + i));
            }
            printf("\n");
            free(tokens);
        }
}

void Test_itoa() {
    printf("%s\n", ft_itoa(0));
}

void Test_putchar_fd() {
    ft_putchar_fd('1', 1);
    ft_putchar_fd('\n', 1);
}

void Test_putstr_fd() {
    ft_putstr_fd("12345\n", 1);
}

void Test_putnbr_fd() {
    ft_putnbr_fd(-2147483648, 1);
}

void Test_memccpy() {
    // Массив источник данных
    unsigned char src[15]="1234567890";

    // Массив приемник данных
    unsigned char dst[15]="";

    // Копируем данные из массива src в массив dst
    ft_memccpy (dst, src,'g', 12);

    // Вывод массива dst на консоль
    printf ("dst: %s\n",dst);
 }

void Test_memmove() {
    unsigned char src[10]="1234567890";

    // Вывод массива src на консоль
    printf ("src old: %s\n",src);

    // Копируем 3 байт
    ft_memmove (&src[4], &src[3], 3);

    // Вывод массива src на консоль
    printf ("src new: %s\n",src);
}

void Test_memchr() {
    // Исходный массив
       unsigned char src[15]="1234567890";
       // Переменная, в которую будет сохранен указатель
       // на искомый символ.
       char *sym;

       // Вывод исходного массива
       printf ("src old: %s\n",src);

       // Поиск требуемого символа
       sym = ft_memchr (src, '4', 10);

       // Если требуемый символ найден, то заменяем его
       // на символ '!'
       if (sym != NULL)
          sym[0]='!';

       // Вывод исходного массива
       printf ("src new: %s\n",src);
}

void Test_memcmp() {
    unsigned char src[15]="1234567890";
       unsigned char dst[15]="1234567890";

       // Сравниваем первые 10 байт массивов
       // и результат выводим на экран
       if (ft_memcmp (src, dst, 10) == 0)
          puts ("Области памяти идентичные.");
       else
          puts ("Области памяти отличаются.");
}

void Test_strlcpy(){
    const char src[] = "123456";
    char dest[12];
    size_t n = ft_strlcpy(dest,src,5);
    printf("%ld\n", n);
    printf("%s\n", dest);
}

void Test_strlcat(){
    const char src[] = "123456";
    char dest[100] = "123";
    size_t n = ft_strlcat(dest,src, 15);
    printf("%ld\n", n);
    printf("%s\n", dest);
}

void Test_strchr(){
    char str [11]="0123456789";
    // Код искомого символа
    int ch = '6';
    // Указатель на искомую переменную в строке,
    // по которой осуществляется поиск.
    char *ach;

    // Ищем символ ‘6’
    ach=ft_strchr(str,ch);

    // Выводим результат на консоль
    if (ach==NULL)
       printf ("Символ в строке не найден\n");
    else
       printf ("Искомый символ в строке на позиции # %ld\n",ach-str+1);
}

void Test_strrchr() {
    char str [11]="0123456786";
    // Код искомого символа
    int ch = '6';
    // Указатель на искомую переменную в строке,
    // по которой осуществляется поиск.
    char *ach;

    // Ищем символ ‘6’
    ach=ft_strrchr(str,ch);

    // Выводим результат на консоль
    if (ach==NULL)
       printf ("Символ в строке не найден\n");
    else
       printf ("Искомый символ в строке на позиции # %ld\n",ach-str+1);
}

void Test_strnstr() {
    char big[] = "0123456789";
    char small[100] = "1234111";

    printf("%s\n", ft_strnstr(big, small, 4));
}

void Test_atoi() {
    assert(ft_atoi("100") == atoi("100"));
    assert(ft_atoi("0") == atoi("0"));
    assert(ft_atoi("-1") == atoi("-1"));
    assert(ft_atoi("+1") == atoi("+1"));
}

void Test_strdup() {
    char src[] = "1234551";
    printf("%s\n", ft_strdup(src));
}
void TestLibft() {
//    Test_strsub();
//    Test_strjoin();
//    Test_strtrim();
//    Test_split();
//    Test_itoa();
//    Test_putchar_fd();
//    Test_putstr_fd();
//    Test_putnbr_fd();
//    Test_memccpy();
//    Test_memmove();
//    Test_memchr();
//    Test_memcmp();
//    Test_strlcpy();
//    Test_strlcat(); ???
//    Test_strchr();
//    Test_strrchr();
//    Test_strnstr(); ???
//    Test_atoi();
    Test_strdup();

}

int main() {
    TestLibft();
}
