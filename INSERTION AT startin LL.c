

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//MADE TAIL AT END OF Double CC LINK LIST
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
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
        head->prev=head;
        head->next=head;
        
        
    }else{ //we move tail not head head fix at starting
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        tail->next=head;
        head->prev=tail;
        
    }
    printf("Choose 0/1 ");
    scanf("%d",&choose);   
    }
    while(choose!=0);
    
    //printf("Number %d ",tail->next->data);
    //printf("Number %d ",head->data);
    
    
    //INSERTION AT starting
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Number ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=tail;
    tail->next=newnode;
    head=newnode;
    
    
    
    
    
    //print
    temp=tail->next;
    while(temp->next!=tail->next){
       printf("Number- %d ",temp->data);
       temp=temp->next;
    }printf("Number %d ",temp->data);
   
    
    return 0;
}