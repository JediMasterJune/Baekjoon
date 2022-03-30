//
//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

double factorial(int n);
void getComplexity(char*);

int main(void)
{
    int cases;
    scanf("%d", &cases);
    
    for (int i = 0; i < cases; ++i) {
        int n;
        int localCases;
        int timeLimit;
        double timeElapsed;
        char complexity[100];
        getComplexity(complexity);
        scanf("%d", &n);
        scanf("%d", &localCases);
        scanf("%d", &timeLimit);
        if (!strcmp(complexity, "N")) {
            timeElapsed = (double) n;
        }
        else if (!strcmp(complexity, "N^2")) {
            timeElapsed = (double) n * n;
        }
        else if (!strcmp(complexity, "N^3")) {
            timeElapsed = (double) n * n * n;
        }
        else if (!strcmp(complexity, "2^N")) {
            timeElapsed = pow(2.0, (double) n);
        }
        else if (!strcmp(complexity, "N!")) {
            timeElapsed = factorial(n);
        }
        timeElapsed *= localCases;
        timeElapsed /= 100000000;
        if (timeElapsed > timeLimit) {
            printf("TLE!\n");
        }
        else {
            printf("May Pass.\n");
        }
    }
    
    return 0;
}

double factorial(int n)
{
    double fact = 1;
    double prev = fact;
    for (int i = 0; i < n; ++i) {
        prev = fact;
        fact *= i + 1;
        if (prev > fact) {
            return prev;
        }
    }
    return fact;
}

void getComplexity(char* complexity)
{
//    char* const complexity = malloc(100);
    int i = 0;
    char ch;
    bool store = false;
    
    while ((ch = getchar()) != ')') {
        if (ch == '(') {
            store = true;
        }
        else if (store) {
            complexity[i++] = ch;
        }
    }
    complexity[i] = '\0';
}
