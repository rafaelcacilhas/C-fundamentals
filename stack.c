#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4

int top = -1, stack[MAX_SIZE];
void push();
void pop();
void show();

int main(){
  int choice;

  while(1){
    printf("\n Perform operations on the stack:");
    printf("\n 1. Push \n 2. Pop \n 3. Show");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        show();
        break;
      default:
        printf("\n Invalid choice!");
    }
  }
}

void push(){
  int element;
  if (top == MAX_SIZE - 1){
    printf("\n Overflow");
  }
  else{
    printf("\n Enter the element to be added: ");
    scanf("%d", &element);
    top = top + 1;
    stack[top] = element;
  }
}

void pop(){
  if (top == -1){
    printf("\n Underflow");
  }
  else{
    printf("\n Popped element: %d", stack[top]);
    top = top - 1;
  }
}

void show(){
  if  (top == -1){
    printf("\n Underflow");
  } else {
    printf("Elements in the stack: \n");
    for(int i = top; i >= 0; --i){
      printf("%d\n", stack[i]);
    }
  }
}
