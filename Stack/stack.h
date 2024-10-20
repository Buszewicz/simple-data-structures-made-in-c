#ifndef STACK_H
#define STACK_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    struct Node* top;
} Stack;

void create_stack(Stack* stack);
void push(Stack* stack, int data);
int pop(Stack* stack);
int peek(Stack* stack);
int is_empty(Stack* stack);
void delete_stack(Stack* stack);
void print_stack(Stack* stack);

#endif
