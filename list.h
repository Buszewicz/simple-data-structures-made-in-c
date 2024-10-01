#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* create_list();
void append(Node** head, int data);
void prepend(Node** head, int data);
void insert_after(Node* prev_node, int data);
void delete_first(Node** head);
void delete_last(Node** head);
void delete_node(Node** head, int key);
void print_list(Node* head);
void delete_list(Node** head);
Node* search(Node* head, int key);

#endif
