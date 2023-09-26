#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("stack is full.\n");
        return;
    }
    else
    {
        top = top + 1;
        stack_arr[top] = data;
        printf("%d\n", stack_arr[top]);
    }
}
int pop()
{
    int value;
    if (top == -1)
    {
        printf("stack is empty.\n");
        exit(1);
    }
    else
    {
        value = stack_arr[top];
        top--;
        return value;
    }
}

void print()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        printf("%d ", stack_arr[i]);
    printf("\n");
}

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    print();
    // printf("%d", data);
}