//
//

#include <stdio.h>
#include <stdbool.h>

bool isDuplicate(int num, int n, int* arr);

int main(void)
{
    int inputs[10];
    int different[10];
    int count = 0;
    
    for (int i = 0; i < 10; ++i) {
        different[i] = -1;
    }
    
    for (int i = 0; i < 10; ++i) {
        
        scanf("%d", &inputs[i]);
    }
    for (int i = 0; i < 10; ++i) {
        int remain = inputs[i] % 42;
        if (!isDuplicate(remain, 10, different)) {
            different[i] = remain;
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        if (different[i] >= 0) count++;
    }
    
    printf("%d\n", count);
    return 0;
}

bool isDuplicate(int num, int n, int* arr)
{
    for (int i = 0; i < n; ++i) {
        if (arr[i] == num) return true;
    }
    return false;
}
