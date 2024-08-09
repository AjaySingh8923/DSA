/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// IMPLEMENTATION OF STACK USING ARRAY
#include <stdio.h>
#define N 5
int top = -1;
int stack[N];

void push(){
    int x,b;
    printf("Enter Number to be inserted ");
    scanf("%d",&x);
    b=N-1;
    if(top==b){
        printf("overflow");
    }else{top++;
        stack[top]=x;
    }
    printf("%d \n",stack[top]);
}

void pop(){
    int a;
    if(top==-1){
        printf("Underflow");
    }
    else{
        a=stack[top];
        top--;
      
    }printf("Number is pop = %d",a);
}

void peek(){
    if(top==-1){
        printf("Underflow");
    }else{
     printf("Number on Top %d ",stack[top]);}
}
void display(){
    int i;
    for(i=top;i>=0;i--){
      printf("Number on Stack ");
      printf(" %d ",stack[i]);  
    }
}

int main()
{   int key;
    do{
    printf("\n \n enter the choice 1-push\n 2-pop\n 3-peek\n 4-display \n"); 
    scanf("%d",&key);
    switch(key){
    case 1:push();
    break;
    case 2:pop();
    break;
    case 3:peek();
    break;
    case 4:display();
    break;
    default :
    printf("invaild number");}
    }while(key!=0);
    //getch();
    //push();
    //pop();
    //peek();
    //display()

    return 0;
}