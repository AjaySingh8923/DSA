

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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
    /*newnode = (struct node *)malloc(sizeof(struct node));
     printf("\n insert at begin \n ");
     printf("Enter Number ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=tail->next;
    tail->next=newnode;
    newnode->next=temp;*/
    
    //insert at END
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter number to insert at end ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    //temp=tail->next;
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;

    
    //print
    temp=tail->next;
    while(temp->next!=tail->next){
       printf("Number %d ",temp->data);
       temp=temp->next;
    }printf("Number %d ",temp->data);
   
    
    return 0;
}