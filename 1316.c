//
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define N 100

int main(void)
{
    int n;
    int count = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        char buffer[N];
        scanf("%s", buffer);
        bool checker['z' - 'a' + 1] = {false};
        for (int j = 0; j < N; ++j) {
            if (!buffer[j]) {
                count++;
                break;
            }
            else {
                if (checker[buffer[j] - 'a'] && buffer[j - 1] != buffer[j]) {
                    break;
                }
                else {
                    checker[buffer[j] - 'a'] = true;
                }
            }
        }
        memset(buffer, 0, 100);
    }
    
    printf("%d\n", count);
    return 0;
}