#include <stdio.h>
#include "linked-list.h"

int main() {
    LinkedList* list = create_empty_list();
    insert_at_beginning_of_list(list, 10);
    print_list(list);
    return 0;
}