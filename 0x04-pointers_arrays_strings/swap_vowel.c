#include <stdio.h>
#include <string.h>
#include <ctype.h>
static inline int is_vowel(int c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
void rev_string(char *s)
{
    char *p1 = s;
    char *p2 = p1 + strlen(p1);
    char c;
    while (p1 < p2)
    {
        while (p1 < p2 && !is_vowel(*p1))
            p1++;
        while (p1 < p2 && !is_vowel(*p2))
            p2--;
        if (p1 != p2)
        {
            c = *p1;
            *p1++ = *p2;
            *p2-- = c;
        }
    }
}
int main(void) {
 char s[10] = "Betty";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
