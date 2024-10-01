#ifndef LIST_H
#define LIST_H

// Definicja struktury węzła listy jednokierunkowej
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Deklaracje funkcji
Node* create_list(); // Tworzenie nowej listy
void append(Node** head, int data); // Dodanie elementu na końcu
void prepend(Node** head, int data); // Dodanie elementu na początku
void insert_after(Node* prev_node, int data); // Dodanie elementu po ustalonym elemencie
void delete_first(Node** head); // Usunięcie elementu z początku
void delete_last(Node** head); // Usunięcie elementu z końca
void delete_node(Node** head, int key); // Usunięcie elementu o określonej wartości
void print_list(Node* head); // Wydrukowanie całej listy
Node* search(Node* head, int key); // Wyszukanie elementu o określonej wartości

#endif
