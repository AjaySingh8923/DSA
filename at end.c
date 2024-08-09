/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    
};

/*void Del_at_begin() {
    struct node *head,*temp;
    //printf("delete after 1 Link  ");
    temp= head;  // Store the current head
    head = head->next;         // Update head to the next node
    free(temp); 
                   // Free the old head
}*/
struct node *head,*newnode,*temp;

   
static void linklist(){
    int choice;
   
    struct node *head=0,*newnode,*temp=0; //declare outside
    //head=0;
    //temp=0;
    do{
    //head=0;
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter number into link list ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;  //// Important to set the next pointer to NULL
    
    if(head==0){
       // head=newnode;
       head=temp=newnode; // yhh arragement shi se krna
    } else{
       // head->next=newnode;
       temp->next=newnode;
       temp=newnode;
    } 
    printf("Do you want to continue (0,1) ");
    scanf("%d",&choice);
    }while(choice !=0);
    
    //newnode->next = head;  // Points newnode's next to the current head of the list
    //print the link list
    // Print the linked list
    temp = head;
    while (temp != 0) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


static void Deletefromend(){
  printf("\n For delete at end");
  struct node *prev,*head,*temp;
   temp=head;
   prev=0;
   while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;}
       
    if(temp==head){head=0;}// Update the previous node's next to NULL and free the last node
    else{prev->next = 0;
    }free(temp);
    printf("\n Link list after delete end node ");
    temp=head;
    while (temp != 0) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
   }

int main() { 
    
    
    linklist();
 
   
/*
    printf("------  \n");
    temp= head;  // Store the current head
    head = head->next;         // Update head to the next node
    free(temp); 
*/


    Deletefromend();
    return 0;
}
