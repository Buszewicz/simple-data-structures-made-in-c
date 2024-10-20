#ifndef QUEUE_H
#define QUEUE_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

void create_queue(Queue* queue);
void enqueue(Queue* queue, int data);
int dequeue(Queue* queue);
int queue_peek(Queue* queue);
int is_queue_empty(Queue* queue);
void delete_queue(Queue* queue);
void print_queue(Queue* queue);

#endif
