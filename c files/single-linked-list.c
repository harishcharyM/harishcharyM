/* swap node not working properly need to update */
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
    while((prev->next != NULL)&(curr->next != NULL))
    {
        
        temp = prev;
        prev = curr;
        curr = temp;
        if(curr == head)
        {
            head = prev;
        }
        temp = prev->next;
        prev->next = curr;
        curr->next = temp;
        if((prev->next == NULL)|(curr->next == NULL)) break;
        prev = prev->next->next;
        curr = curr->next->next;
    }
    printf("\n2");
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
    for(int i = 1; i<= 5; i++)
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

