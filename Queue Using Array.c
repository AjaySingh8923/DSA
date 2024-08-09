/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 5 
int queue[N];
int rear=-1;
int front=-1;


void enqueue(int x){
    if(rear==N-1){
        printf("Overflow");
    }else if(rear==-1 && front==-1){
        front=rear=0;
        queue[rear]=x;
    }else{
        rear++;
        queue[rear]=x;
        
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
         printf("underflow");
    }else if(front==rear){
        printf("last elemnt to dequeue %d",queue[front]);
        rear=front=-1;
    }else{
        front++;
        //printf("\n Dequeue nxt element %d",queue[front]);
    }
    
}

void display(){
    int i;
    if(rear==-1 && front == -1){
         printf("EMPTY");
    }else{
        for(int i=front;i<rear+1;i++)
        printf("\n Element in queue %d ",queue[i]);
    }
    
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