#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node* next;
};

void LinkListTraversal(struct Node* head)
{
    struct Node* ptr=head;

    do{

        printf("Element : %d\n",ptr->data);

        ptr= ptr->next;

    } while(ptr != head);
}
struct Node* InsertionCircularlist(struct Node* head,int data)
{
    struct Node *ptr= (struct Node*) malloc(sizeof(struct Node));

    ptr->data=data;

    struct Node *p= head->next;

    while(p->next !=head){

        p= p->next;
    }
    p->next=ptr;

    ptr->next=head;

    head=ptr;

    return head;
};
int main()
{
    struct Node* head;

    struct Node* second;

    struct Node* third;

    struct Node* fourth;

    head= (struct Node*)malloc(sizeof(struct Node));

    second=(struct Node*)malloc(sizeof(struct Node));

    third=(struct Node*)malloc(sizeof(struct Node));

    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;

    head->next=second;

    second->data=8;

    second->next=third;

    third->data=9;

    third->next=fourth;

    fourth->data=10;

    fourth->next=head;

    printf("Before Insertion In Circuler Linked List : \n\n");

    LinkListTraversal(head);

    head=InsertionCircularlist(head,6);

    printf("\nAfter Insertion In Circular Link list: \n\n");

    LinkListTraversal(head);


    return 0;
}
