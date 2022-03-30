//
//

#include <stdio.h>
#include <stdbool.h>

char stack[50005];
int top = 0;

void push(char ch);
void pop(void);

int main(void)
{
    int cases;
    bool isEmpty = false;
    scanf("%d", &cases);
    getchar();
    for (int i = 0; i < cases; ++i) {
        top = 0;
        isEmpty = false;
        char ch;
        while ((ch = getchar()) != '\n') {
            if (ch == '(') push(ch);
            else if (ch == ')') {
                if (top == 0) { // empty
                    isEmpty = true;
                    while (getchar() != '\n');
                    break;
                }
                else
                    pop();
            }
        }
        if (top == 0 && !isEmpty) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

void push(char ch)
{
    if (top < 0) top = 0;
    stack[top++] = ch;
}

void pop(void)
{
    top--;
}
