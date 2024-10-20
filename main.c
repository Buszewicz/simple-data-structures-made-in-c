#include <stdio.h>
#include "List/list.h"

int main() {
    List list;
    create_list(&list);
    append(&list, 1);
    print_list(&list);
    insert_after(&list, 1, 2);
    insert_before(&list, 1, 3);
    print_list(&list);
    delete_first(&list);
    print_list(&list);
    delete_last(&list);
    print_list(&list);
    delete_list(&list);
}

