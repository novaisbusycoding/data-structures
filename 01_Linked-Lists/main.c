#include <stdio.h>
#include "linked-list.h"

int main() {
    LinkedList* list = createList();
    insertAtBeginning(list, 10);
    printList(list);
    return 0;
}