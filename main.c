#include <stdio.h>
#include "list.h"

int main() {
    Node* list = create_list();

    append(&list, 10);
    append(&list, 20);
    prepend(&list, 5);
    insert_after(list, 15);

    printf("Lista: ");
    print_list(list);

    printf("Wyszukiwanie elementu o wartości 15: ");
    Node* found = search(list, 15);
    if (found != NULL)
        printf("Znaleziono %d\n", found->data);
    else
        printf("Nie znaleziono\n");

    delete_first(&list);
    printf("Lista po usunięciu pierwszego elementu: ");
    print_list(list);

    delete_last(&list);
    printf("Lista po usunięciu ostatniego elementu: ");
    print_list(list);

    delete_node(&list, 15);
    printf("Lista po usunięciu elementu o wartości 15: ");
    print_list(list);

    return 0;
}

