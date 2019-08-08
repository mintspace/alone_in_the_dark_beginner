/*
** Assignment name  : alpha_mirror
** Expected files   : alpha_mirror.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program called alpha_mirror that takes a string and displays this string
** after replacing each alphabetical character by the opposite alphabetical
** character, followed by a newline.
**
** 'a' becomes 'z', 'Z' becomes 'A'
** 'd' becomes 'w', 'M' becomes 'N'
**
** and so on.
**
** Case is not changed.
**
** If the number of arguments is not 1, display only a newline.
**
** Examples:
**
** $>./alpha_mirror "abc"
** zyx
** $>./alpha_mirror "My horse is Amazing." | cat -e
** Nb slihv rh Znzarmt.$
** $>./alpha_mirror | cat -e
** $
** $>
*/

#include <unistd.h>

char *mirror(char *c)
{
    if (*c >= 'a' && *c <= 'm')
        *c = 'z' - (*c - 'a');
    else if (*c >= 'A' && *c <= 'M')
        *c = 'Z' - (*c - 'A');
    else if (*c >= 'n' && *c <= 'z')
        *c = ('z' - *c) + 'a';
    else if (*c >= 'N' && *c <= 'Z')
        *c = ('Z' - *c) + 'A';
    else
        *c = *c;
    return (c);
}

void alpha_mirror(char *str)
{
    while (*str)
    {
        write(1, mirror(str), 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write(1, "\n", 1);
    return (0);
}
