/******************************************************************************
QUEUE USING LINK LIST

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;

void enqueue(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
   // printf("Enter The data");
    newnode->data=x;
    newnode->next=0;
    printf("Enter The data %d \n",x);
    if(rear==0 && front==0){
        rear=front=newnode;
    }else{
        rear->next=newnode;
        rear=newnode;
        //rear=newnode->next;
        
    }
    
    //scanf("%d",&newnode->data);
}


void dequeue(){
    struct node *temp;
    temp=front;
    if(front==0 && rear==0){
         printf("underflow");
    }else{
        printf("Dequeue %d\n",front->data);
        front=front->next;
        free(temp);
        //printf("\n Dequeue nxt element %d",queue[front]);
    }
    
}

void display(){
    struct node *temp;
    //struct node *newnode;
    //newnode=(struct node *)malloc(sizeof(struct node));
    temp=front;
    if(front==0&&rear==0){
        printf("no element");
    }else{
    while(temp!=0){
        printf(" element In queue  %d \n",temp->data);
        temp=temp->next;
        
    }}
   
    
}


int main()
{   
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    dequeue();
    display();
    
    return 0;
}