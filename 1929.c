//
//

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);
    
    for (int i = m; i <= n; ++i) {
        bool prime = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            printf("%d\n", i);
        }
    }
    
    
    return 0;
}