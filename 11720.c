//
//

#include <stdio.h>

#define N 100


int main(void)
{
    int numArr[N];
    int n;
    int sum = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%1d", &num);
        sum += num;
    }
    
    printf("%d\n", sum);
    return 0;
}