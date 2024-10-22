#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max],front=-1,rear=-1;
void Enqueue()
{
int elem;
if (rear==max-1)
{
printf("Queue is Overflow\n ");
return;
}
printf("enter the element to be enqueued ");
scanf("%d",&elem);
if(front==-1)
{
front=0;
}
rear++;
queue[rear]=elem;
printf("%d enqued to the queue \n",elem);
}

void Dequeue()
{
 if(front==-1||front>rear)
 {
  printf("Queue is Underflow \n");
 }
 else
 printf("dequed element is %d",queue[front]);
 front++;
 if(front>rear)
 {
 front=rear=-1;
 }

}
void Display()
{
int i;
if(front==-1)
{
printf("Queue is empty \n");
}
else 
printf("The Queue elements are ");
for(i=front;i<=rear;i++)
{
printf("%d",queue[i]);

}
printf("\n");

}

int main()
{
int ch;
while(1)
{
 printf("\n---Queue Elements---\n");
 printf("1.Enqueue\n");
 printf("2.Dequeue\n");
 printf("3.Display\n");
 printf("4.Exit\n");
 printf("Enter your choice ");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  Enqueue();
  break;
  case 2:
  Dequeue();
  break;
  case 3:
  Display();
  break;
  case 4:
  exit(0);
  default:
  printf("invalid choice");
  
 
 
 
}}
}
