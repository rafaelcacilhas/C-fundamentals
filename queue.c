#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int front = -1, last = -1, queue[MAX_SIZE];
void add();
void removeFromQueue();
void show();

int main(){
  int choice;

  while(1){
    printf("\n Perform operations on the queue:");
    printf("\n 1. Add \n 2. Remove \n 3. Show");
    printf("\n Enter the choice: ");
    scanf("%d", &choice); 

    switch(choice){
      case 1:
        add();
        break;
      case 2:
        removeFromQueue();
        break;
      case 3: 
        show();
        break;
      default:
        printf("\n Invalid choice!" );
    }
  }
}

void add(){
  int element;
  if(last == MAX_SIZE -1){
    printf("\n Overflow");
  } else{
    printf("\n Enter the element to be added: ");
    scanf("%d", &element);
    if(front == -1){
      front = 0;
    }
    last = last + 1;
    queue[last] = element;
  }
}

void removeFromQueue(){
  if(front == -1 || front > last){
    printf("\n Underflow");
  } else{
    front = front + 1;
    if(front > last) {
      front = last = - 1;
    }
  }
}

void show(){
  if (front == -1 || front > last) {
    printf("\n Queue is empty");
  } else {
    printf("Elements in the queue: \n");
    for(int i = front; i <= last; i++) {
      printf("%d\n", queue[i]);
    }
  }
}
