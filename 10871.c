//
// Created by JediMasterJune on 21. 02. 02..
//

#include <stdio.h>

#define LENGTH 100000

int main(void)
{
    int n, x;
    scanf("%d %d", &n, &x);
    int array[LENGTH] = {0};
    for (int i = 0; i < n; i++) {
        int mario;
        scanf("%d", &mario);
        array[i] = mario;
    }
    for (int i = 0; i < n; i++) {
        if (array[i] < x) {
            printf("%d ", array[i]);
        }
    }
    return 0;
}