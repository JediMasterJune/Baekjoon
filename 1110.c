//
//

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    int mov = 1;
    int result = (n / 10 + n % 10) % 10 + (n % 10) * 10;
    
    while (result != n) {
        result = (result / 10 + result % 10) % 10 + (result % 10) * 10;
        mov++;
    }
    
    printf("%d\n", mov);
    
    return 0;
}