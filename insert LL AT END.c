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
int main()

{   int choice,num;
   
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
    
    //INSERT NUM AT END
    printf("insert number at which position ");
    scanf("%d",&num);
    newnode = (struct node *)malloc(sizeof(struct node)); // Allocate new node//glti idhr huii
            printf("Insert data: ");
            scanf("%d", &newnode->data);
            temp=head; //start the transverse
            while (temp->next != NULL) {
            temp = temp->next; // Traverse to the last node
        }
        temp->next = newnode; // Link the last node to the new node
    
    /*if (num == 1) {
            newnode = (struct node *)malloc(sizeof(struct node)); // Allocate new node//glti idhr huii
            printf("Insert data: ");
            scanf("%d", &newnode->data);
            newnode->next = head;  // Point new node's next to the current head
            head = newnode;        // Update head to the new node
        }
    */
    
    
    
    
    //print the link list
    // Print the linked list
   temp = head;
    while (temp != 0) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    
    
    return 0;
}

    
