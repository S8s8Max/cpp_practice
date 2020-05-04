#include <bits/stdc++.h>
using namespace std;

int reverse(char * str)
{
    char * pEnd = str;
    char tmp;
    size_t i;

    for (i = 0; i < strlen(str) - 1; ++i) {
        pEnd++;
    }

    while (str < pEnd) {
        tmp = *str;
        *str = *pEnd;
        *pEnd = tmp;

        str++;
        pEnd--;
    }
    return 0;
}

int main(void)
{
    char moji[] = "Hello, World.";

    reverse(moji);

    printf("%s\n", moji);

    return 0;
}
