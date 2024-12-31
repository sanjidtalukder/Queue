#include<stdio.h>
#define MAX 100

//Define the maximum size of the queue
int queue[MAX];
int front=-1;
int rear=-1;

//Function to check if the queue is empty
int isEmpty(){
return(front==-1);
}

//Function to check if the queue is Full
int isFull(){
return (rear==MAX-1);
}

//Function to add an item to the queue
void enqueue(int item){
if(isFull()){
    printf("Queue is full\n");
    return ;
}
if(front==-1){
    front=0;
}
rear++;
queue[rear]=item;
printf("%d is present or enqueue is queue\n",item);
}

//Function to remove an item to the queue
int dequeue(){
if(isEmpty()){
    printf("Queue is empty\n");
    return -1;
}
int item=queue[front];
front++;
if(front>rear){
//Reset the queue when all element are dequeued
    front=rear=-1;
}
return item;
}

int main(){
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
 printf("%d is delete or dequeue is queue\n", dequeue());
    printf("%d is delete or dequeue is queue\n", dequeue());
return 0;
}






