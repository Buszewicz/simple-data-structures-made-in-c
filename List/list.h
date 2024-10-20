#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct List {
    struct Node* head;
} List;

void create_list(List* list);
void append(List* list, int data);
void prepend(List* list, int data);
void insert_after(List* list, int after, int data);
void insert_before(List* list, int before, int data);
void delete_first(List* list);
void delete_last(List* list);
void delete_node(List* list, int key);
void print_list(List* list);
void delete_list(List* list);
Node* search(List* list, int key);

#endif
