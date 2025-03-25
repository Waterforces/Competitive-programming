#include <stdio.h>
char s[1000005];
int main() {
    scanf("%s", s);
    int m3 = 0, m11 = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        m3 += s[i] - '0';
        m11 *= 10;
        m11 += s[i] - '0';
        m11 %= 11;
    }
    printf("%d %d", m3%3, m11%11);
}