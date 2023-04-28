/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
Updated swap function
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
void swap_node()
{
    struct node *prev = head;
    struct node *curr = head->next;
    struct node *temp = NULL;
    struct node *p = head;
    while((prev != NULL)&(curr != NULL))
    {
        
        temp = prev;
        prev = curr;
        curr = temp;
        if(curr == head)
        {
            head = prev;
            temp = prev->next;
            prev->next = curr;
            curr->next = temp;
        }
        else
        {
            temp = prev->next;
            prev->next = curr;
            curr->next = temp;
           // head->next->next = prev;
           struct node *q = head;
           while(q->next != curr)
           {
               q = q->next;
           }
           q->next = prev;
        }
        
        if((prev->next == NULL)|(curr->next == NULL)) break;
        prev = prev->next->next;
        curr = curr->next->next;
    }
}
void reverse_print(struct node *h)
{
    struct node *temp = h;
    if(temp->next == NULL)
    {
        printf("%d ",temp->data);
        return;
    }
    else
    {
        reverse_print(temp->next);
        printf("%d ",temp->data);
    }
    return;
}
int main()
{
    for(int i = 1; i<= 10; i++)
    {
        push(i);
    }
    printf("\n======forword=======\n");
    display();
    // reverse();
    // printf("\n======reverse =======\n");
    // display();
    printf("\n======swap node ======\n");
    swap_node();
    display();
    // printf("\n======reverse printing=====\n");
    // reverse_print(head);
    return 0;
}

