#include <stdio.h>
#include "list.h"

int main() {
    Node* list = create_list();
    append(&list, 1);
    delete_list(&list);
    return 0;
}

