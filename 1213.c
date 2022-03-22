//
//

#include <stdio.h>
#include <ctype.h>

#define N 50
#define RANGE 'Z' - 'A' + 1

int main(void)
{
    int bullets[RANGE] = {0};
    int ammo = 0;
    char pal[N] = {0};
    char ch;
    
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            bullets[ch - 'A']++;
            ammo++;
        }
    }
    
    int j = 0;
    char middle;
    int countdown = 1;
    
    for (int i = 0; i < RANGE; ++i) {
        while (bullets[i] >= 2) {
            pal[j] = i + 'A';
            pal[ammo - j - 1] = i + 'A';
            bullets[i] -= 2;
            j++;
        }
        if (bullets[i] == 1) {
            countdown--;
            if (ammo % 2 == 0 || countdown < 0) {
                printf("I'm Sorry Hansoo\n");
                return 0;
            }
            else {
                middle = i + 'A';
                bullets[i]--;
            }
        }
    }
    if (ammo % 2) {
        pal[j] = middle;
    }
    
    printf(pal);
    
    return 0;
}