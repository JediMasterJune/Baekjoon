//
//

#include <stdio.h>

int main(void)
{
    int cases;
    long long x1, x2, y1, y2, r1, r2;
    int result;
    long long dSquare;
    long long sum;
    scanf("%lld", &cases);
    
    for (int i = 0; i < cases; ++i) {
        scanf("%lld%lld%lld%lld%lld%lld", &x1, &y1, &r1, &x2, &y2, &r2);
        if ((x1 == x2) && (y1 == y2)) {
            if (r1 == r2) {
                result = -1;
            }
            else {
                result = 0;
            }
        }
        else {
            dSquare = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
            sum = r1 + r2;
            if (dSquare == sum * sum) {
                result = 1;
            }
            else if (dSquare > sum * sum) {
                result = 0;
            }
                
                // distance < sum
            else if (dSquare == r2 * r2 - 2 * r1 * r2 + r1 * r1) {
                result = 1;
            }
            else if (dSquare < r2 * r2 - 2 * r1 * r2 + r1 * r1) {
                result = 0;
            }
            else {
                result = 2;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}