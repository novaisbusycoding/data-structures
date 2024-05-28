#include <stdlib.h>
#include <stdbool.h>

// * Types *
typedef struct Node {
    int value;
    struct Node* next;
} Node;
typedef struct LinkedList {
    Node* head;
} LinkedList;
// **

// * Functions *
LinkedList* create_empty_list();
bool is_list_empty(LinkedList* list);
bool is_node_empty(Node* node);
void insert_at_beginning_of_list(LinkedList* list, int value);
void print_list(LinkedList* list);
// **

// ----------------------------------------------------- //

LinkedList* create_empty_list() {
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
    if (list != NULL) {
        list->head = NULL;
    }
    return list;
}

void insert_at_beginning_of_list(LinkedList* list, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->value = value;
        newNode->next = list->head;
        list->head = newNode;
    }
}

Node* find_at_list_by_value(LinkedList* list, int value) {
    Node* element;
    element = list->head;
    
    while((element != NULL) && (element->value != value))
        element = element->next;
    
    return element;
}

void print_list(LinkedList* list) {
    Node* element = list->head;
    while (element != NULL) {
        printf("%d\n", element->value);
        element = element->next;
    }
}



bool is_list_empty(LinkedList* list){
    return list->head == NULL;
}

bool is_node_empty(Node* node){
    return node->next == NULL;
}
