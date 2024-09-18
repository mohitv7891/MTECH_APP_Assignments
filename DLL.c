#include <stdio.h>
#include <stdlib.h>

struct node {

 int data;
 struct node* prev;
 struct node* next;

};
struct node* createNode(int num)
     {
     struct node* newNode = (struct node*)malloc(sizeof(struct node));
     newNode->data=num;
     newNode->next=NULL;
     newNode->prev=NULL;
     return newNode;
}

void printList(struct node* temp){
while (temp!=NULL)
    {   printf("%d -> ",temp->data );
        temp=temp->next;
    }
    printf("\n");
    return;
}

int main(){
    int n;
    struct node* head=NULL;
    struct node* p=head;
    

    printf("enter no. of nodes: ");
    scanf("%d",&n);

    while(n>0)
    {
        if(head==NULL)
        {
           head=createNode(n); 
           p=head;
        }
        else{
           struct node* temp=createNode(n);
            p->next=temp;
            temp->prev = p;
            p=temp;  /*V.IMP LINE*/
            
            printf("%d ",n);
            n--;
           }
    }

    
    printList(head);
    
    return 0;
}