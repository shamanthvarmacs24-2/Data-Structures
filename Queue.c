#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
if(rear==N-1)
{
printf("Queue Overflow");
}
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=x;
}
else{
rear++;
queue[rear]=x;
}
}
void dequeue()
{
if(front==-1 && rear==-1)
{
printf("Queue Underflow");
}
else if(front==rear)
{
front=rear=-1;
}
else{
printf("Deleted Element:%d\n",queue[front]);
front++;
}
}
void display()
{
if(front==-1 && rear==-1)
{
printf("Underflow");
}
else
{
for(int i=front;i<=rear;i++)

{
printf("%d\n",queue[i]);
}
}
}
int main()
{
    int r;
     printf("1.Insertion 2.Deletion 3.Display 4.Exit\n");
    while(1){
        printf("Enter the operation to be performed on Queue");
        scanf("%d",&r);
        switch(r){
        case 1:
            printf("Enter an element to be inserted");
            int s;
            scanf("%d",&s);
            enqueue(s);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Option\n");
            break;
        }
    }
    return 0;
}


