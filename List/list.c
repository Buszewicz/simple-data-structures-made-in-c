#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void create_list(List* list) {
    list->head = NULL;
}

void append(List* list, int data) {
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL) {
        list->head = new_node;
        return;
    }
    Node* temp = list->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void prepend(List* list, int data) {
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;
}

void insert_after(List* list, int after, int data) {
    Node* temp = list->head;

    while (temp != NULL) {
        if (temp->data == after) {
            Node* new_node = malloc(sizeof(Node));
            new_node->data = data;
            new_node->next = temp->next;
            temp->next = new_node;
            return;
        }
        temp = temp->next;
    }
    printf("Element %d not found in the list.\n", after);
}

void insert_before(List* list, int before, int data) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (list->head->data == before) {
        prepend(list, data);
        return;
    }

    Node* temp = list->head;

    while (temp->next != NULL) {
        if (temp->next->data == before) {
            Node* new_node = malloc(sizeof(Node));
            new_node->data = data;
            new_node->next = temp->next;
            temp->next = new_node;
            return;
        }
        temp = temp->next;
    }

    printf("Element %d not found in the list.\n", before);
}

void print_list(List* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delete_list(List* list) {
    Node* temp = list->head;
    Node* node_to_delete = NULL;

    while (temp != NULL) {
        node_to_delete = temp;
        temp = temp->next;
        free(node_to_delete);
    }
    list->head = NULL;
}

void delete_first(List* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
}

void delete_last(List* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = list->head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void delete_node(List* list, int key) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (list->head->data == key) {
        Node* node_to_delete = list->head;
        list->head = list->head->next;
        free(node_to_delete);
        return;
    }
    Node* temp = list->head;

    while (temp->next != NULL) {
        if (temp->next->data == key) {
            Node* node_to_delete = temp->next;
            temp->next = temp->next->next;
            free(node_to_delete);
            return;
        }
        temp = temp->next;
    }
    printf("Element %d not found in the list.\n", key);
}

Node* search(List* list, int value){
    Node* temp = list->head;

    while (temp != NULL) {
        if (temp->data == value) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}