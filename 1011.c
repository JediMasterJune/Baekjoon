//
//

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        int x, y;
        int moves = 0;
        scanf("%d%d", &x, &y);
        y = y - x;
        x = 0;
        
        int k = 1;
        
        while (x < y) {
            if (x + k <= y - k) {
                x += k;
                y -= k++;
                moves += 2;
            }
            else {
                k++;
                break;
            }
        }
        k--; //원상복귀
        
        if (x == y) {
            printf("%d\n", moves);
            continue;
        }
        
        else {
            while (y - x > 0) {
                y -= k;
                if (k > 1) k--;
                moves++;
            }
            printf("%d\n", moves);
        }
    }
    return 0;
}