//
//

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    bool remainders[42] = {false};
    int count = 0;
    
    for (int i = 0; i < 10; ++i) {
        int num;
        scanf("%d", &num);
        if (!remainders[num % 42]) {
            remainders[num % 42] = true;
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}