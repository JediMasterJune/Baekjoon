//
//

#include <stdio.h>


int main(void)
{
    int n;
    scanf("%d", &n);
    int floor = 0;
    int step = 0;
    
    for (int i = 1;; ++i, ++step) {
        if (step > 6 * floor) {
            floor++;
            step = 1;
        }
        if (n == i) break;
    }
    
    printf("%d\n", floor + 1);
    return 0;
}