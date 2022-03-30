//
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100


int main(void)
{
    char raw[N];
    char target[N];
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            raw[i++] = ch;
        }
    }
    scanf("%s", target);
    if (strstr(raw, target)) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}