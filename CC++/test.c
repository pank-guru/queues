#include <stdio.h>
#include<stdlib.h>
#define MAX 50// we're defining the size of of MAX variable to be 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
int choice;//used to allow one to enter an integer of one's choice 
while (1)
{
printf("1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void insert()
{
int item;// declaring of item to be added to the queue
if(rear == MAX - 1)//checks if the queue is full or not
printf("Queue Overflow \n");
else
{
if(front== - 1)
front = 0;
printf("Inset the element in queue : ");
scanf("%d", &item);
rear = rear + 1;//adding the initialized item to the queue
queue_array[rear] = item;//assining the rear to the element inserted by the user
}
}
void delete()
{
if(front == - 1 || front > rear)//checking if the queue is empty or not 
{
printf("Queue Underflow \n");
return;
}
else
{
printf("Element deleted from queue is : %d\n", queue_array[front]);// displaying the element deleted from the queue
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty \n");
else
{
printf("Queue is : \n");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("\n");
}
}
