#include <stdio.h>
#include <stdlib.h>

struct node {

 int data;
 struct node* next;
};

struct node* createNode(int num){
    
     struct node* newNode = (struct node*)malloc(sizeof(struct node));
     newNode->data=num;
     newNode->next=NULL;
     return newNode;
}

void insertAtEnd(struct node* temp,int num){
    struct node* newNode = createNode(num);


     while (temp->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=newNode;


     return;
     
}

void printList(struct node* temp){
while (temp!=NULL)
    {   printf("%d -> ",temp->data );
        temp=temp->next;
    }
    printf("\n");
    return;
}

struct node* reverse(struct node* head){
    if(head==NULL || head->next==NULL) return head;
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* next=head->next;

    while (curr)
    {
        curr->next=prev;
        prev=curr;
        curr=next;
        if(next) next=next->next;
    }

    return prev;  
}

struct node* reverseUsingRec(struct node* head){



}
int main(){

   struct node* head=createNode(1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    
    printList(head);
    head = reverse(head);
    printList(head);

    head = reverseUsingRec(head);
    printList(head);

    return 0;
}

/*  
4. Reverse a singly linked list. 
Input: 
1 -> 2 -> 5 -> 7 -> 4 -> NULL 
Output: 
4 -> 7 -> 5 -> 2 -> 1 -> NULL 

*/