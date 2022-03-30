//
//

#include <stdio.h>

typedef struct student {
    int sex;
    int num;
} Student;

int flip(int n);


int main(void)
{
    int switches[100] = {0};
    int n;
    int heads;
    Student students[100];
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", switches + i);
    }
    
    scanf("%d", &heads);
    for (int i = 0; i < heads; ++i) {
        scanf("%d%d", &(students[i].sex), &(students[i].num));
        if (students[i].sex == 1) {
            int mul = 1;
            int target;
            while ((target = (students[i].num * mul++) - 1) < n) {
                switches[target] = flip(switches[target]);
            }
        }
        else {
            int j = 0;
            int target = students[i].num - 1;
            while (switches[target - j] == switches[target + j] &&
                   (target >= j && target + j < n)) {
                switches[target - j] = flip(switches[target - j]);
                if (j > 0) {
                    switches[target + j] = flip(switches[target + j]);
                }
                j++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (i % 20 == 0 && i >= 20) {
            printf("\n");
        }
        printf("%d ", switches[i]);
    }
    
    return 0;
}

int flip(int n)
{
    return n == 0 ? 1 : 0;
}
