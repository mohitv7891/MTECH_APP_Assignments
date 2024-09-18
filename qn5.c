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

struct node* insertAtBegin(struct node* temp, int num){
  struct node* newNode = createNode(num);
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

int maximum(struct node* head){
    int max=0;
    if (head==NULL)
    {
        return 0;
    }
    else if (head->next==NULL)
    {
        return head->data;
    }
    else{
      max=head->data;
      head=head->next;
      while (head!=NULL)
      {
        if(max<head->data) max=head->data;
        head=head->next;
      }
    }
    return max;
    
    
}

int minmum(struct node* head){
    int min=0;
    if (head==NULL)
    {
        return 0;
    }
    else if (head->next==NULL)
    {
        return head->data;
    }
    else{
      min=head->data;
      head=head->next;
      while (head!=NULL)
      {
        if(min>head->data) min=head->data;
        head=head->next;
      }
    }
    return min;
    
}

int main(){
    struct node *head = createNode(1);
     insertAtEnd(head,100);
     insertAtEnd(head,500);
     insertAtEnd(head,200);
     insertAtEnd(head,400);
     insertAtEnd(head,300);
     printList(head);

     int maxElement=maximum(head);
     printf("\n%d",maxElement);

     int minElement=minmum(head);
      printf("\n%d",minElement);
        
    return 0;
}

/*
5. Write a program for printing the following in a given linked list: 
a. 
maximum  
b. minimum   
c. 
maximum – minimum 
*/