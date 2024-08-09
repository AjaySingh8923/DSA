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

int main() { 
    int choose;
    struct node *head,*newnode,*temp;
do{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the Link List ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==0){
        head=temp=newnode;
    }
    else{
      temp->next=newnode;
      newnode=temp;
    }
    printf("You want to continue (0,1) ");
    scanf("%d",&choose);
    
}
while(choose!=0);
    
    printf("Link list are ");
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
 
   
printf("------  \n");
    temp= head;  // Store the current head
    head = head->next;         // Update head to the next node
    free(temp); 

   
   
    printf("Link list are 1 node delete ");
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
