/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void push(int val)
{
    struct node *p = malloc(sizeof(struct node));
    p->data = val;
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        struct node *temp = head;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}
void display()
{
    struct node *temp = head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverse()
{
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;
    
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
int main()
{
    for(int i = 1; i<= 5; i++)
    {
        push(i);
    }
    printf("\n======forword=======\n");
    display();
    reverse();
    printf("\n======reverse =======\n");
    display();

    return 0;
}

