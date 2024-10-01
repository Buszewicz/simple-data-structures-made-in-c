#include <stdio.h>
#include "list.h"

int main() {
    Node* list = create_list();
    delete_list(&list);
    return 0;
}

