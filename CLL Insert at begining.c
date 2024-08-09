
//MADE TAIL AT END OF CC LINK LIST
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    
    struct node *next;
};

int main()
{   struct node *newnode,*head,*temp,*tail;
    int choose;
    do{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Number ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=tail=newnode;
        tail->next=head;
    }else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
    printf("Choose 0/1 ");
    scanf("%d",&choose);   
    }
    while(choose!=0);
    
    //insert at begin
    newnode = (struct node *)malloc(sizeof(struct node));
     printf("\n insert at begin \n ");
     printf("Enter Number ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=tail->next;
    tail->next=newnode;
    newnode->next=temp;
    
    
    //print
    temp=tail->next;
    while(temp->next!=tail->next){
       printf("Number %d ",temp->data);
       temp=temp->next;
    }printf("Number %d ",temp->data);
   
    
    return 0;
}