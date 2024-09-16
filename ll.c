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

void  insertAt_k(struct node* head,int k,int num){
     struct node* newNode = createNode(num);

     for(int i=1;i<k-1;i++){
        head=head->next;
     }
        newNode->next=head->next;
        head->next=newNode;

        return;
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

struct node* deleteAtBegin(struct node* head){
    struct node* temp= head;
    head=head->next;
    free(temp);
return head;
}

void deleteAtEnd(struct node* head){
    struct node* temp=NULL;
    if(head==NULL) return;
    else if(head->next==NULL)
     {head=NULL;
    return;}
    else{
        while (head->next!=NULL)
        {   
            temp=head;
            head=head->next;
        }
        temp->next=NULL;
        free(head);
    }
    return;
}

void deleteAt_k(struct node* head, int k){
   if(k<=0 ) return;
  struct node* temp=head;

  for (int i = 1; i < k; i++)
  {    temp=head;
       head=head->next;
    
  }
  temp->next = head->next;
  free(head);
  return ;
  
}

int main(){
    struct node *head = createNode(1);
        //   insertAtBegin(head,1);
   head =  insertAtBegin(head,10);
   head =  insertAtBegin(head,20);
   head =  insertAtBegin(head,30);
     
    insertAtEnd(head,100);
    insertAtEnd(head,200);
    insertAt_k(head,2,5000);

    printList(head);
    
    head = deleteAtBegin(head);
    printList(head);

    deleteAtEnd(head);
    printList(head);

    deleteAt_k(head,2);
    printList(head);

    
    
    return 0;
}

/*
a. 
at the beginning 
b. at the end 
c. 
at a given position k 
Input:  
k = 3 
1 -> 2 -> 5 -> 7 -> 4 -> NULL 
Output:  
2 -> 5 -> 7 -> 4 -> NULL 
1 -> 2 -> 5 -> 7 -> NULL 
1 -> 2 -> 7 -> 4 -> NULL 
*/





/*

a. 
at the beginning 
b. at the end 
c. 
at a given position k 
Input:  
value=8, k=4 
1 -> 2 -> 5 -> 7 -> 4 -> NULL

////
for(int i=0;i<6;i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        newNode->data = val;
        newNode->next=NULL;
       // printf("%d ", i);
        if(head==NULL){ head = newNode;}
        else
        {
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        temp=head;
    }

     temp  = head;
    while (temp!=NULL)
    {   printf("%d -> ",temp->data );
        temp=temp->next;
    }

    // printf("NULL");
     printf("\nenter element to insert at begining: ");
     scanf("%d", &val);

      printf("Linked List after insert at begining: \n");

       printf("\nenter element to insert at end: ");
     scanf("%d", &val);

      printf("\nenter element to insert at end: ");
     scanf("%d", &val);
     printf("\nenter position at to insert: ");
     scanf("%d", &k);
*/