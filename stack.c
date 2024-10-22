#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max],top=-1;
void push()
{
int elem;
if(top==max-1)
{
printf("stack overflow, cannot push");
}
printf("enter the element to be pushed ");
scanf("%d",&elem);
top++;
stack[top]=elem;
printf("Element pushed to the stack is %d",elem);
}

void pop()
{
 if(top==-1)
 {
 printf("Stack underflow");
 }
 printf("poped element is %d",stack[top]);
 top--;
 
}
void display()
{
int i;
 if(top==-1)
 {
 printf("stack Empty");
 
}
else
printf("Stack elements are \n");
for(i=top;i>=0;i--)
{
 printf("%d\n",stack[i]);
} 
}


int main()
{
 int ch;
 while(1)
 {
 printf("\n---stack menu----\n");
 printf("1.push\n");
 printf("2.Pop\n");
 printf("3.Display\n");
 printf("4.Exist\n");
 printf("Enter your choice ");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  push();
  break;
  case 2:
  pop();
  break;
  case 3:
  display();
  break;
  case 4:
  exit(0);
  break;
  default:
  printf("invalid choice");
  
 }
 }
 
 }
 
 
