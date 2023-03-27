// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int top = -1;
int stack[5];
void push(int p)
{
    top++;
    stack[top] = p;
}
int pop()
{
    int item = stack[top];
    top--;
    return item;
}
void perform(int a, int b, char s)
{
    int c;
    switch(s)
    {
        case '+' :
            c = a+b;
            push(c);
            break;
        case '-':
        c = a-b;
            push(c);
            break;
        case '*':
            c = a*b;
            push(c);
            break;
        case '/':
            c = a/b;
            push(c);
            break;
        case '%':
           c = a%b;
            push(c);
            break;
    }
}
int eval(char *ptr)
{
    int len = strlen(ptr);
    int data1 ,data2;
    for(int i = 0; i < len; i++)
    {
        if(ptr[i] == '+' || ptr[i] == '-' || ptr[i] == '*' || ptr[i] == '/' || ptr[i] == '%')
        {
            data2 = pop();
            data1 = pop();
            perform(data1,data2,ptr[i]);
        }
        else
        {
            push(ptr[i] - '0');
        }
    }
}
int main() {
    char *str = "34*56*+";
    eval(str);
    int res = pop();
    printf("res =%d",res);
    return 0;
}
