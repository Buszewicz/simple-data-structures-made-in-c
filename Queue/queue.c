#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void create_queue(Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

void enqueue(Queue* queue, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = data;
    new_node->next = NULL;

    if (queue->rear == NULL) {
        queue->front = new_node;
        queue->rear = new_node;
    } else {
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}

int dequeue(Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty.\n");
        return -1;
    }

    Node* node_to_delete = queue->front;
    int data = node_to_delete->data;
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(node_to_delete);
    return data;
}

int peek(Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue->front->data;
}

int is_empty(Queue* queue) {
    return queue->front == NULL;
}

void delete_queue(Queue* queue) {
    Node* temp = queue->front;
    Node* node_to_delete = NULL;

    while (temp != NULL) {
        node_to_delete = temp;
        temp = temp->next;
        free(node_to_delete);
    }

    queue->front = NULL;
    queue->rear = NULL;
}

void print_queue(Queue* queue) {
    Node* temp = queue->front;
    if (temp == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
