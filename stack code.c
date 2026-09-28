#include <stdio.h>

int stack[5], top = -1;

void push(int x)
{
    if (top == 4)
        printf("Overflow");
    else
        stack[++top] = x;
}

void pop()
{
    if (top == -1)
        printf("Underflow");
    else
        printf("Popped: %d", stack[top--]);
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();

    return 0;
}