//
//

#include <stdio.h>

int main(void)
{
    int a = 0, b = 1;
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i < n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    
    if (n >= 1)
        printf("%d\n", b);
    else
        printf("%d\n", a);
    
    return 0;
}