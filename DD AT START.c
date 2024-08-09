/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// CIRCULAR LINK LIST INSERTION  AT BEGINING
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

int main()
{   int choose=1,position;//choose to 1 to ensure that the loop runs at least once
    struct node *head,*newnode,*temp;
    head=0;
    
    
    while(choose !=0){
        newnode = (struct node *)malloc(sizeof(struct node));
    
    printf("Enter the number you want to insert ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0){
        head=temp=newnode;
    }else{
        
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("DO YOU WANT TO COUNTINUE ");
    scanf("%d",&choose);
    }
    printf("----------------------------------------------");
    struct node *tail,*new;
    new = (struct node *)malloc(sizeof(struct node));
    
    printf("enter the position ");
    scanf("%d",&position);
    printf("Enter the data you want to insert ");
    scanf("%d",&new->data);
    new->next=0;
    new->prev=0;
    
    if(position ==1){
        newnode->prev=new;
        new->next=head;
       head=new;
    }

    temp=head;
    while(temp!=0){
        printf("Circular Doubly Linked List: ");
        printf(" %d ",temp->data);
        temp=temp->next;
        //temp=newnode;
       
    }
    
    
    return 0;
}