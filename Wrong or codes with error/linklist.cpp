#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void add_at_end(struct node*head,int data)
{
    struct node *heaD, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data that u want to insert\n");
    scanf("%d",&newnode->next);
    newnode->next=heaD;
    heaD=newnode;
}
int main(void)
{
    struct node *head, *newnode, *temp;
    head = 0;
    int data;
    int choice=1;
    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
            head = temp = newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("DO YOU want to continue(0,1)\n");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    add_at_end(head, data);
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}