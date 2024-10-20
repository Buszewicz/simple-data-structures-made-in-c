#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void create_stack(Stack* stack) {
    stack->top = NULL;
}

void push(Stack* stack, int data) {
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = data;
    new_node->next = stack->top;
    stack->top = new_node;
}

int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty.\n");
        return -1;
    }
    Node* node_to_delete = stack->top;
    int data = node_to_delete->data;
    stack->top = stack->top->next;
    free(node_to_delete);
    return data;
}

int peek(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack->top->data;
}

int is_empty(Stack* stack) {
    return stack->top == NULL;
}

void print_stack(Stack* stack) {
    Node* temp = stack->top;
    if (temp == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delete_stack(Stack* stack) {
    Node* temp = stack->top;
    Node* node_to_delete = NULL;
    while (temp != NULL) {
        node_to_delete = temp;
        temp = temp->next;
        free(node_to_delete);
    }
    stack->top = NULL;
}
